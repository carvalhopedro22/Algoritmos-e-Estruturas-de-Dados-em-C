#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "figura.h"

int main(){
  Figura *figura1;
  int qtdlado;
  int lado;
  int base;
  int altura;

  printf("Digite a quantidade de lados (3/4): ");
  scanf("%d",&qtdlado);
  printf("Digite o tamanho do lado: ");
  scanf("%d",&lado);
  printf("Digite o valor da base: ");
  scanf("%d",&base);
  printf("Digite o valor da altura: ");
  scanf("%d",&altura);
  printf("\n");

  NovaFigura(figura1,qtdlado,lado,base,altura);
  Area(figura1);
  printf("\n");
  Perimetro(figura1);
  return 0;
}