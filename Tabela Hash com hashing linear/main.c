#include "tabela.h"
#include <stdio.h>
#include <stdlib.h>

int main (){

	int array_b[8] = {18, 41, 22, 44, 59, 32, 31, 73};
	int hash_t1[13] = {};
	int hash_t2[13] = {}; 	
	
	//Aplica Hash Simples
	printf("=== HASH SIMPLES ===\n");
	int a;
	for(a = 0; a < 8; a++){
		inserir(hash_t1, array_b[a]);
	}
		
	imprimir(hash_t1);

	//Aplica Hash Duplo
	printf("=== HASH DUPLO ===\n");
	for(a = 0; a < 8; a++){
		inserir_duplo(hash_t2, array_b[a]);
	}

	imprimir(hash_t2);
}