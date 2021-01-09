#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){
    Arv a1;
    int opcao,valor;
    criar_vazia(&a1);

    printf("___________________________________\n");
    printf("| O que voce deseja?              |\n");
    printf("| 1 - Inserir                     |\n");
    printf("| 2 - Impressão em ordem          |\n");
    printf("| 3 - Impressão em pré-ordem      |\n");
    printf("| 4 - Impressão em pós-ordem      |\n");
    printf("| 5 - Encontrar um elemento       |\n");
    printf("| 6 - Altura da arvore            |\n");
    printf("| 7 - Quantidade de nós           |\n");
    printf("| 8 - Maior elemento              |\n");
    printf("| 9 - Menor elemento              |\n");
    printf("| 10 - Soma dos nós               |\n");
    printf("| 11 - Profundidade de um nó      |\n");
    printf("| 12 - Percurso em largura        |\n");
    printf("| 13 - Retirada de um nó          |\n");
    printf("| 0 - Saída                       |\n");
    printf("|_________________________________|\n"); 

    printf("\n");
    
    while(1){
        printf("\nEscolha uma opção: ");
        scanf("%d",&opcao); //tecla de opção do menu
        printf("\n");
      
        switch(opcao){
            case 1:{
               printf("Digite valores para a arvore: ");
               scanf("%d",&valor);
               inserir(&a1,valor);
               break;
            }
            case 2:{
               printf("Arvore ordenada: ");
               imprimir_ordem(a1); //ordem
               printf("\n");
               break;
            }
            case 3:{
                printf("Arvore em pré-ordem: ");
                imprimir_preordem(a1); //pré-ordem
                printf("\n");
                break;
            }
            case 4:{
                printf("Árvore em pós-ordem: ");
                imprimir_posordem(a1); //pós-ordem
                printf("\n");
                break;
            }
            case 5:{
                printf("Insira UM valor para verificar se está na arvore: ");
                scanf("%d",&valor);
                pertence(a1,valor);
                printf("\nPertence: %d\n", pertence(a1, valor));
                break;
            }
            case 6:{
                printf("\nA altura da arvore e: %d", altura(a1));
                printf("\n");
                break;
            }
            case 7:{
                printf("\nA quantidade de nos da arvore e: %d",contar_no(a1));
                printf("\n");
                break;
            }
            case 8:{
                printf("\nO maior elemento é: %d",maior(a1));
                printf("\n");
                break;
            }
            case 9:{
                printf("\nO menor elemento é: %d",menor(a1));
                printf("\n");
                break;
            }
            case 10:{
                printf("\nA soma dos nós vale: %d",somar_no(a1));
                printf("\n");
                break; 
            }
            case 11:{
                printf("\nProfundidade %d\n",depth(a1,valor));
                printf("\n");
                break;
            }
            case 12:{
                printf("Valores impressos em percurso de largura: \n");
                largura(a1);
                printf("\n");
                break;
            }
            /*case 13:{
                retirar(&a1,valor);
                printf("\n");
                printf("Escolha o elemento que deseja retirar: \n");
                break;
            }*/
        }
        if(opcao == 0){
           printf("Bye Bye...");
           printf("\n");      
           break;
        }
    }
    printf("\n");
    printf("FIM");
}