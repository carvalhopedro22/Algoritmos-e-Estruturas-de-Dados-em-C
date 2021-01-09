#include<stdlib.h>
#include<stdio.h>
#include "fila.h"

void InitializeQueue(Queue *queue){
    queue -> first = (CellPointer) malloc(sizeof(TCell));
    queue -> last = queue -> first;
    queue -> first -> next = NULL;
}

int IsEmpty(Queue queue){
    return(queue.first == queue.last);
}

void Enqueue(Queue *queue, Arv p){ //enfileirar
    queue -> last -> next = (CellPointer) malloc(sizeof(TCell));
    queue -> last = queue -> last -> next;
    queue -> last -> next = NULL;
    queue -> last -> p = p;
}

void Dequeue(Queue *queue, Arv *p){ //desenfileirar
    CellPointer aux;
    if(IsEmpty(*queue)){
        printf("Erro, Fila vazia\n");
        return;
    }
    aux = queue -> first;
    queue -> first = queue -> first -> next;
    *p = queue -> first -> p;
    free(aux);
}