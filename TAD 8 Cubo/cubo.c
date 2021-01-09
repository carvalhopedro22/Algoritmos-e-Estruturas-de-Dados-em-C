#include "cubo.h"
#include <stdio.h>
#include <stdlib.h>

void NovoCubo(Cubo* c, int lado){
    c -> lado = lado;
}

void liberar(Cubo* cubo){
    free(cubo);
}

int Area(Cubo* cubo){
   int a = cubo -> lado * cubo -> lado;
   printf("Area: %d\n",a);
   return a;
}

int Volume(Cubo* cubo){
   int v = cubo -> lado * cubo -> lado * cubo -> lado;
   printf("Volume: %d\n",v);
   return v;
}