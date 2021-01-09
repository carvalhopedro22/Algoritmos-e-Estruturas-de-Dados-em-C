#include <stdio.h>
#include <string.h>
#include "produto.h"

int main(){
  Produto *produto1;
  char nome[50];
  float preço;
  int quantidade;
  int valor;

  printf("Digite o nome do produto: ");
  fgets(nome,50,stdin);

  printf("Digite o preço do produto: ");
  scanf("%f",&preço);

  printf("Digite a quantidade disponivel: ");
  scanf("%d",&quantidade);

  NovoProduto(produto1,nome,preço,quantidade);
  Acrescentar(produto1,valor);
  Retirar(produto1,valor);
  printf("\n");
  Imprime(produto1);
  
  return 0;
}