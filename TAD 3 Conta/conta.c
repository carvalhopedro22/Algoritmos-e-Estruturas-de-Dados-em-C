#include <stdio.h>
#include "conta.h"

void inicializa(Conta* conta, int numero, double saldo){
  conta -> numero = numero;
  conta -> saldo = saldo;
}
void deposito(Conta* conta, double valor){
  conta -> saldo += valor;
}
void saque(Conta* conta, double valor){
  conta -> saldo -= valor;
}
void imprime(Conta* conta){
  printf("Numero: %d\n",conta->numero);
  printf("Saldo: %.2lf\n",conta->saldo);
}