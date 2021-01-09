#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void criar_vazia(Arv* no){ //criando árvore vazia
  *no = NULL;
}

void criar(int num, Arv* no){
    *no = (Arv)malloc(sizeof(no));
    (*no) -> info = num;
    (*no) -> esq = NULL;
    (*no) -> dir = NULL;
}

int inserir(Arv* no, int num){
  if(*no == NULL){
    criar(num, no);
  }else if(num < (*no)-> info){
    inserir(&(*no)-> esq, num);
  }else{
    inserir(&(*no)->dir, num);
  }
  return 0;
}

int vazia(Arv a){
    return a == NULL;
}

void imprimir_preordem(Arv a){ //pré-ordem
    if(a == NULL){
        return;
    }
    if(!vazia(a)){
       printf("%d ", a -> info); //mostra a raiz
       imprimir_preordem(a -> esq); //mostra subarvore a esquerda
       imprimir_preordem(a -> dir); //mostra subarvore a direita
    }
}

void imprimir_posordem(Arv a){ //pós-ordem
    if(a == NULL){
        return;
    }
    if(!vazia(a)){
       imprimir_posordem(a -> esq); //mostra subarvore a esquerda
       imprimir_posordem(a -> dir); //mostra subarvore a direita
       printf("%d ", a -> info); //mostra a raiz
    }
}

void imprimir_ordem(Arv a){ //ordem
    if(a == NULL){
        return;
    }
    if(!vazia(a)){
        imprimir_ordem(a -> esq); //mostra subarvore a esquerda
        printf("%d ", a -> info); //mostra a raiz
        imprimir_ordem(a -> dir); //mostra subarvore a direita
    }
}

int pertence(Arv a, int num){
    if(vazia(a)){
        return 0;
    }
    return a -> info == num || pertence(a -> esq, num) || pertence(a -> dir, num);
}

int altura(Arv a){
    if(a == NULL){
        return -1;
    }else{
        int he = altura(a -> esq);
        int hd = altura(a -> dir);
        if(he < hd){
            return hd + 1;
        }else{
            return he + 1;
        }
    }
}

int contar_no(Arv a){
  if(a == NULL){
    return 0;
  }
  return 1 + contar_no(a -> esq) + contar_no(a -> dir); 
}

int maior(Arv sub){
  if(sub -> dir != NULL){
    return maior(sub ->  dir);
  }else{
    return sub -> info;
  }
}

int somar_no(Arv a){
    if (a) 
        return a->info + somar_no(a->esq) + somar_no(a->dir);
    else
        return 0;
}

int menor(Arv sub){
    if(sub -> esq != NULL){
        return menor(sub -> esq);
    }else{
        return sub -> info;
    }
}

void largura(Arv p){
    Queue fila;
    InitializeQueue(&fila);
    if(p != NULL){
        Enqueue(&fila, p);
        while(!IsEmpty(fila)){
            Dequeue(&fila, &p);
            printf("%d", p -> info);
            if(p -> esq != NULL){
              Enqueue(&fila, p -> esq);
            }
            if(p -> dir != NULL){
              Enqueue(&fila, p -> dir);
            }
        } 
    }else{
        printf("Vazia");
    }
}

Arv* retirar(Arv* a, int num){
  if (*a == NULL)
    return NULL;
 else if ((*a) -> info > num)
    (*a) -> esq = *retirar(&(*a) -> esq, num);
 else if ((*a) -> info < num)
    (*a) -> dir = *retirar(&(*a) -> dir, num);
 else { //achou o nó a remover 
 //nó sem filhos 
    if ((*a) -> esq == NULL && (*a) -> dir == NULL) {
       free (a);
       a = NULL;
    }
    //nó só tem filho à direita 
    else if ((*a) -> esq == NULL) {
       Arv* t = a;
       a = & (*a) -> dir;
       free (t);
    }
    //só tem filho à esquerda 
    else if ((*a) -> dir == NULL) {
       Arv* t = a;
       a = & (*a) -> esq;
       free (t);
    }
    //nó tem os dois filhos 
    else {
       Arv* f = & (*a) -> esq;
       while ((*f) -> dir != NULL) {
          f = & (*f) -> dir;
       }
       (*a) -> info = (*f) -> info; //troca as informações 
       (*f) -> info = num;
       (*a) -> esq = *retirar(&(*a) -> esq,num);
    }
 }
return a;
}

int MAXI(int a, int b){
  return a > b ? a : b;
}

int depth(Arv a,int x) {
   if (vazia(a))    // verificar se a arvore/ramo existe
       return -1;  // retornar -1 (arvore/ramo não existe)
   if (a->info == x)  // verificar se o nó da árvore e o elemento pesquisado
       return 0; // o nó encontrasse no nível 0 da subárvore actual
   return MAXI(1 + depth(a->esq, x), 1 + depth(a->dir, x)); // retornar o maior valor entre a pesquisa na subárvore da esquerda e a subárvore da direita
}

Arv* liberar(Arv a){
    if(!vazia(a)){
        liberar (a -> esq);
        liberar (a -> dir);
        free(a);
    }
    return NULL;
}