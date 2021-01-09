#include "tabela.h"
#include <stdio.h>
#include <stdlib.h>

int hash(int val){
	return (int) val % 13;
}

int inserir(int hash_t[], int val){
	int k = hash(val);
    while(1){
        if(hash_t[k]== NULL){
            hash_t[k] = val;
            return 1;
        }else{
            printf("Colisão! valor %d hash %d\n", val, k);
            k = hash(k+1);
        }
    }
}

int imprimir(int hash_t[]){
	int a;
	for(a = 0; a < 13; a++){
		printf("posição %d - valor %d\n", a, hash_t[a]);
	}
    printf("\n");
    return 1;
}

int hash_2(int val){
	return 8 - (val % 8);
}

int inserir_duplo(int hash_t[], int val){
	int k = hash(val);
	if(k < 13){
		if(hash_t[k] == NULL){
			hash_t[k] = val;
			return 1;
		} else {
			printf("Colisão! valor %d hash %d! Aplicando segundo hash...", val, k);
			int k2 = hash_2(val);
			
			if(hash_t[k2] == NULL){
				hash_t[k2] = val;
				printf(" valor %d hash_2 %d\n", val, k2);
				return 1;
			} else {
				printf("Colisão no segundo hash! valor %d hash2 %d\n", val, k2);
				return 0;
			}
		}
	}
    return 1;
}