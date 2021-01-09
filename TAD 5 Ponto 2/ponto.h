typedef struct{
  int x,y;
}Ponto;

int NovoPonto (Ponto* ponto, int x, int y);
void liberar(Ponto* ponto);
int Quadrante (Ponto* ponto);
int Distancia (Ponto* ponto, Ponto* ponto2);