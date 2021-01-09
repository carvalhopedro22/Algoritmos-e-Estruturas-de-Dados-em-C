typedef struct{
  int altura, raio;
}Cilindro;

void NovoCilindro(Cilindro* c, int lado, int raio);
void liberar(Cilindro* cilindro);
float AreaBase(Cilindro* cilindro);
float AreaLat(Cilindro* cilindro);
float AreaTot(Cilindro* cilindro);
float Volume(Cilindro* cilindro);