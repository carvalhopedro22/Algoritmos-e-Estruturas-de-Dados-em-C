#include "no.h"

typedef struct TCell *CellPointer;
typedef struct TCell{
    Arv p;
    CellPointer next;
}TCell;
typedef struct{
    CellPointer first, last;
}Queue;

void InitializeQueue(Queue *queue);
int IsEmpty(Queue queue);
void Enqueue(Queue *queue, Arv p); //enfileirar
void Dequeue(Queue *queue, Arv *p); //desenfileirar