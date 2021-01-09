#include "cilindro.h"
#include <stdio.h>
#include <stdlib.h>

void NovoCilindro(Cilindro* c, int altura, int raio){
    c -> altura = altura;
    c -> raio = raio;
}

void liberar(Cilindro* cilindro){
    free(cilindro);
}

float AreaBase(Cilindro* cilindro){
    float a1 = 3.14 * cilindro -> raio * cilindro -> raio;
    printf("Area da base: %.2f\n",a1);
    return a1;
}

float AreaLat(Cilindro* cilindro){
    float a2 = cilindro -> altura * cilindro -> raio;
    printf("Area lateral: %.2f\n",a2);
    return a2;
}

float AreaTot(Cilindro* cilindro){
    float a3 = 2 * 3.14 * cilindro -> raio * cilindro -> raio + cilindro -> altura * cilindro -> raio;
    printf("Area Total: %.2f\n",a3);
    return a3;
}

float Volume(Cilindro* cilindro){
    float v = 3.14 * cilindro -> raio * cilindro -> raio * cilindro -> altura;
    printf("Volume: %.2f\n",v);
    return v;
}