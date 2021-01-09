typedef struct{
  int lado;
}Cubo;

void NovoCubo(Cubo* c, int lado);
void liberar(Cubo* cubo);
int Area(Cubo* cubo);
int Volume(Cubo* cubo);