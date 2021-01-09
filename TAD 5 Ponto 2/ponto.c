#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

int NovoPonto (Ponto* ponto, int x, int y){
  if(ponto != NULL){
    ponto -> x = x;
    ponto -> y = y;
  }
  return 0;
}
void liberar(Ponto* ponto){
  free(ponto);
}
int Quadrante (Ponto* ponto){
  if(ponto -> x > 0 && ponto -> y > 0){
    printf("Primeiro quadrante\n");
  }else if(ponto -> x < 0 && ponto -> y > 0){
    printf("Segundo quadrante\n");
  }else if(ponto -> x < 0 && ponto -> y < 0){
    printf("Terceiro Quadrante\n");
  }else if(ponto -> x > 0 && ponto -> y < 0){
    printf("Quarto quadrante\n");
  }else{
    printf("Origem\n");
  }
  return 0;
}
int Distancia (Ponto* ponto, Ponto* ponto2){
  float distancia;
  int p1,p2;
  p1 = (ponto2 -> x - ponto -> x)*(ponto2 -> x - ponto -> x);
  p2 = (ponto2-> y - ponto -> y)*(ponto2 -> y - ponto -> y);
  distancia = sqrt(p1 + p2);
  printf("Distancia: %.2f\n",distancia);
  return 0;
}