#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "esfera.h"

int main(){
  Esfera *e1;
  int raio;
  float a,v;

  printf("Digite o tamanho da raio do esfera: ");
  scanf("%d",&raio);

  NovaEsfera(e1,raio);
  a = Area(e1);
  v = Volume(e1);
  return 0;
}