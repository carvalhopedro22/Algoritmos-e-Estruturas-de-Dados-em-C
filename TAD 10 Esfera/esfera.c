#include "esfera.h"
#include <stdio.h>
#include <stdlib.h>

void NovaEsfera(Esfera* e, int raio){
    e -> raio = raio;
}

void liberar(Esfera* esfera){
    free(esfera);
}

float Area(Esfera* esfera){
    float a = 4 * 3.14 * esfera -> raio * esfera -> raio;
    printf("Area da esfera: %.2f\n",a);
    return a;
}

float Volume(Esfera* esfera){
    float v = (4 * 3.14 * esfera -> raio * esfera -> raio * esfera -> raio)/3;
    printf("Volume da esfera: %.2f\n",v);
    return v;
}