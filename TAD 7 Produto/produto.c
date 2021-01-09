#include <stdio.h>
#include <string.h>
#include "produto.h"

void NovoProduto(Produto* produto, char nome[50], float preço, int quantidade){
  strcpy(produto -> nome,nome);
  produto -> preço = preço;
  produto -> quantidade = quantidade;
}
void Acrescentar(Produto* produto, int valor){
  printf("Digite a quantidade que se deseja acrescentar: ");
  scanf("%d",&valor);
  produto -> quantidade += valor;
}
void Retirar(Produto* produto, int valor){
  printf("Digite a quantidade que se deseja retirar: ");
  scanf("%d",&valor);
  produto -> quantidade -= valor;
}
void Imprime(Produto* produto){
  printf("Quantidade disponivel: %d",produto -> quantidade);
}