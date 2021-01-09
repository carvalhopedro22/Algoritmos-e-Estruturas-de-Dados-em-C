#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main() {
  Conta conta1;
  inicializa(&conta1, 918556, 300.00);
  printf(" Antes da movimentação: \n");
  imprime(&conta1);
  deposito(&conta1, 50.00);
  saque(&conta1, 70.00);
  printf("\n Depois da movimentação: \n");
  imprime(&conta1);
  return 0;
}