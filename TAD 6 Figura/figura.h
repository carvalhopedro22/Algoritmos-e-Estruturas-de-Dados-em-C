typedef struct{
  int qtdlado;
  int lado;
  int base;
  int altura;
}Figura;

void NovaFigura(Figura* figura, int qtdlado, int lado, int base, int altura);
void Area(Figura* figura);
void Perimetro(Figura* figura);