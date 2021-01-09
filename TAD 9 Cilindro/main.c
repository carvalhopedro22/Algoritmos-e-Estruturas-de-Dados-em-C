#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cilindro.h"

int main(){
  Cilindro *c1;
  int altura, raio;
  float a1,a2,a3,v;

  printf("Digite o tamanho da altura do cilindro: ");
  scanf("%d",&altura);

  printf("Digite o tamanho da raio do cilindro: ");
  scanf("%d",&raio);

  NovoCilindro(c1,altura,raio);
  a1 = AreaBase(c1);
  a2 = AreaLat(c1);
  a3 = AreaTot(c1);
  v = Volume(c1);
  return 0;
}