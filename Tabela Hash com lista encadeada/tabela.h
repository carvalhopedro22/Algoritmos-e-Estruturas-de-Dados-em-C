struct reg {
	float item; 
	struct reg *prox; 
};
typedef struct reg NO;

int funcaohash(int); // argumento: chave
void inicializa(NO **);
void insere(int, NO **); // argumentos: item a ser inserido e tabela HASH
void imprime(NO **); 
void libera(NO **); 
void apaga(int, NO **); // argumentos: chave a ser apagada e tabela HASH

void inserelista(int, NO **); // argumentos: item a ser inserido e tabela HASH
void percorrelista(int, NO **); // argumentos: posição da tabela HASH e tabela HASH
int buscalista(int, NO **); // argumentos: chave e tabela