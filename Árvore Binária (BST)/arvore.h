#include "fila.h"

void criar_vazia(Arv* no);

void criar(int num, Arv* no); //sae = subarvore a esquerda  sad = subarvore a direita  insere elementos

int inserir(Arv* no, int num);//variavel tipo ponteiro para no

int vazia(Arv a); //verificar se a arvore é vazia

void imprimir_preordem(Arv a); //imprimir em pré-ordem
void imprimir_posordem(Arv a); //imprimir em pós-ordem
void imprimir_ordem(Arv a); //imprimir em ordem

int pertence(Arv a, int num);

int altura(Arv a);

int contar_no(Arv a);
int somar_no(Arv a);
int maior(Arv sub);
int menor(Arv sub);

int depth(Arv a, int x);

void largura(Arv p);

Arv* retirar(Arv* a, int num);

Arv* liberar(Arv a);