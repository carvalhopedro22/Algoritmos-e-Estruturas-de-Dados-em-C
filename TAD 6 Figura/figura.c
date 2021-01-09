#include <stdio.h>
#include <math.h>
#include "figura.h"

void NovaFigura(Figura* figura, int qtdlado, int lado, int base, int altura){
  figura -> qtdlado = qtdlado;
  figura -> lado = lado;
  figura -> base = base;
  figura -> altura = altura;
}
void Area(Figura* figura){
  if(figura -> qtdlado == 3){
    printf("Triangulo\n");
    int area = (figura -> base * figura -> altura)/2;
    printf("Area: %d\n",area);
  }else if(figura -> qtdlado == 4){
    printf("Quadrado\n");
    int area = figura -> lado * figura -> lado;
    printf("Area: %d\n",area);
  }else{
    printf("Figura invalida para perimetro\n");
  }
}
void Perimetro(Figura* figura){
  if(figura -> qtdlado == 3){
    printf("Triangulo\n");
    int perimetro = figura -> lado * 3;
    printf("Perimetro: %d\n",perimetro);
  }else if(figura -> qtdlado == 4){
    printf("Quadrado\n");
    int perimetro = figura -> lado * 4;
    printf("Perimetro: %d\n",perimetro);
  }else{
    printf("Figura invalida para perimetro\n");
  }
}