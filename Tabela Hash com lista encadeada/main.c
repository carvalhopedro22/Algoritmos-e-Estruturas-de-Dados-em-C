#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 7
#include "tabela.h"
int main() {
	NO *HASH[TAM_MAX]; // criando tabela hash (vetor de ponteiros para lista)
	inicializa(HASH); // inicializando tabela hash na memoria
	int i;
	float item;
	
    printf("\n*********************************************************\n");
	printf("Tabela HASH com tratamento de colisoes Lista - 7 posicoes");
	printf("\n*********************************************************");
	printf("\nInserindo 10 elementos");
	for (i=0; i<10; i++){
		printf("\nInserindo elemento %d",i+1);
		printf(" - Forneca valor real: "); 
		scanf("%f",&item);
		insere(item,HASH);
	} 
	
	imprime(HASH);  
	
	while(1) {
		printf("\n\n>> Forneca o item que deseja apagar (-1 sai): ");
		scanf("%f",&item);
		if (item==-1) break;
		apaga(item,HASH);	
		imprime(HASH);
	}  
	
	libera(HASH);
	
	puts("\n");
}