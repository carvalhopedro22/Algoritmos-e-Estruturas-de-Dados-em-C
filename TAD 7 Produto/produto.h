typedef struct{
  char nome[50];
  float preço;
  int quantidade;
  int valor;
}Produto;

void NovoProduto(Produto* produto, char nome[50], float preço, int quantidade);
void Acrescentar(Produto* produto, int valor);
void Retirar(Produto* produto, int valor);
void Imprime(Produto* produto);