typedef struct{
  int numero;
  double saldo;
}Conta;

void inicializa(Conta* conta, int numero, double saldo);
void deposito(Conta* conta, double valor);
void saque(Conta* conta, double valor);
void imprime(Conta* conta);