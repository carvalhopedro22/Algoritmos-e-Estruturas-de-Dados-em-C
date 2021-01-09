typedef struct{
  int raio;
}Esfera;

void NovaEsfera(Esfera* e, int raio);
void liberar(Esfera* esfera);
float Area(Esfera* esfera);
float Volume(Esfera* esfera);