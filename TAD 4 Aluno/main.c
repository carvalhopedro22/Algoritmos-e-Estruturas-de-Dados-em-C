#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"

int main() {
  Aluno *aluno1;
  char nome[50];
  int matricula;
  int semestre;
  char curso[50];
  float coeficiente;
  
  printf(" Digite o nome do aluno: ");
  fgets(nome,50,stdin);
  printf(" Digite o curso do aluno: ");
  fgets(curso,50,stdin);
  printf(" Digite a matricula do aluno: ");
  scanf("%d",&matricula);
  printf(" Digite o semestre atual do aluno: ");
  scanf("%d",&semestre);
  printf(" Digite o coeficiente do aluno: ");
  scanf("%f",&coeficiente);

  printf("****************************\n");
  novoAluno(aluno1,nome,matricula,semestre,curso,coeficiente);
  Coeficiente(aluno1);
  SemestreRestante(aluno1);
  Curso(aluno1);
  Matricula(aluno1);

  return 0;
}