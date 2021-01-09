#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 7
#include "tabela.h"

int funcaohash(int chave) {
	return abs(chave) % TAM_MAX;
}

void inicializa(NO **HASH) {
	int i;
	for(i=0; i<TAM_MAX; i++)
		 HASH[i]=NULL;		 
}

void insere(int item, NO **HASH) { // argumentos: item a ser inserido e tabela HASH
	
	int pos = funcaohash(item); // CALCULA POSIÇAO
	
	if (HASH[pos]!=NULL) { // se ocorreu colisao
		if (buscalista(item,HASH)) { // verificando se a chave ja existe
			printf(" *** ATENCAO O item %d ja foi cadastrado ***",item);
			return;
		}
	}
	
	inserelista(item,HASH);
}

void inserelista(int item, NO **HASH) {
	int pos = funcaohash(item);
	NO **lista = &HASH[pos];
	
	if (*lista == NULL) {
		*lista = (NO *) malloc(sizeof(NO));
  		if (*lista == NULL) {
			printf("\nErro alocacao memoria!");
			exit(1);
  		}
  		(*lista)->item=item;
  		(*lista)->prox=NULL;
  		
  		printf("-> Inserido HASH[%d]",pos);
 	}
	else { // Se ocorreu colisao
		printf("-> Colisao  HASH[%d]",pos);
	
	    NO *guarda= HASH[pos]; // guardando posicao inicial ponteiro
	
		while ((*lista)->prox != NULL) 
		// Caminha para fim da lista caso contenha mais de 2 itens
			*lista=(*lista)->prox; 
				
		(*lista)->prox=(NO *) malloc(sizeof(NO));
		if ((*lista)->prox == NULL) {
			printf("\nErro alocacao memoria!");
			exit(1);
  		}
  		
		*lista=(*lista)->prox;
  		(*lista)->item=item;
  		(*lista)->prox=NULL; 
  		
  		HASH[pos]=guarda; // retornando ponteiro para a posiçao inicial
	}
	
}

void imprime(NO **HASH) { // Imprime tabela HASH
	int i;
	puts("");
	for (i=0; i<TAM_MAX; i++) {
		printf("\nHASH[%d] ->",i);
		percorrelista(i,HASH);
	}
}

void percorrelista(int pos, NO **HASH) { // Percorre lista imprimindo-a
	NO *lista = HASH[pos];
	while (lista != NULL) {
		printf(" %.2f ->",lista->item);
		lista = lista->prox;
	}
	printf(" NULL");
} 

int buscalista(int chave, NO **HASH) {
	int pos = funcaohash(chave);
	NO *lista = HASH[pos];
	while (lista != NULL) {
		if (chave == lista->item) return 1; // Se encontrou retorna verdadeiro
		lista = lista->prox;
	}
	return 0;
}

void libera(NO **HASH) {
	int i;
	NO *proximo;
	for(i=0; i<TAM_MAX; i++) {
		NO **lista=&HASH[i]; 
		while(*lista!= NULL) { // liberando lista da memoria
  			proximo = (*lista)->prox;                
  			free(*lista);
  			*lista = proximo; 
  		} 
  	}
  	free(proximo);  	
}

void apaga(int chave, NO **HASH) { 
 int pos = funcaohash(chave);
 if (!buscalista(chave,HASH)) { // verificando se item pertence a tabela
 	puts("\nItem nao encontrado");
	return;
 }
	
 NO **lista = &HASH[pos];
 NO *anterior = *lista;
 NO *proximo = (*lista)->prox;
 NO *guarda = HASH[pos]; // guardando posicao do ponteiro 

 while (*lista!=NULL) { // laço percorre lista		
	if ((*lista)->item == chave) { // Se encontrou o item		
		if (*lista == anterior) { // Se o item esta no inicio
			if ((*lista)->prox==NULL) { // Se a lista possui um unico item
				free(*lista);
				HASH[pos]=NULL;
			}
			else { 
				(*lista)->prox=proximo->prox;
				(*lista)->item=proximo->item;
				HASH[pos]=guarda;
			}
		}
		else { // Se o item NAO esta no inicio
			anterior->prox=proximo;
			free(*lista);
			HASH[pos]=guarda;
		}
		return;
 	} // fim laço encontrou o item		
	anterior = *lista;
	*lista = (*lista)->prox;
	proximo = (*lista)->prox; 		
 } // fim laço percorre lista
	
 HASH[pos]=guarda; // retonando ponteiro para posicao inicial
 free(anterior);
 free(proximo);
 free(guarda);	
}