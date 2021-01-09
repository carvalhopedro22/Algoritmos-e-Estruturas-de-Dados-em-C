#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cubo.h"

int main(){
  Cubo *c1;
  int lado;
  int a,v;

  printf("Digite o tamanho do lado: ");
  scanf("%d",&lado);

  NovoCubo(c1,lado);
  a = Area(c1);
  v = Volume(c1);
  return 0;
}