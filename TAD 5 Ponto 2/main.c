#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

int main(){
  Ponto ponto, ponto2;
  int x1,x2,y1,y2;
  printf("Digite as coordenadas do primeiro ponto: ");
  scanf("%d %d",&x1,&y1);
  printf("Digite as coordenadas do segundo ponto: ");
  scanf("%d %d",&x2,&y2);

  NovoPonto(&ponto,x1,y1);
  NovoPonto(&ponto2,x2,y2);
  Quadrante(&ponto);
  Quadrante(&ponto2);
  Distancia(&ponto,&ponto2);
  return 0;
}