#include<stdio.h>
#include <string.h>
#include "aluno.h"

void novoAluno(Aluno* aluno, char nome[50],int matricula, int semestre, char curso[50], float coeficiente){
  strcpy(aluno -> nome ,nome);
  aluno -> matricula = matricula;
  aluno -> semestre = semestre;
  strcpy(aluno -> curso ,curso);
  aluno -> coeficiente = coeficiente;
}
void Coeficiente(Aluno* aluno){
  printf("Nome: %s",aluno -> nome);
  printf("Coeficiente: %.2f\n",aluno -> coeficiente);
}
void SemestreRestante(Aluno* aluno){
  printf("Semestres restantes: %d\n",8 - aluno -> semestre);
}
void Curso(Aluno* aluno){
  printf("Curso: %s", aluno -> curso);
}
void Matricula(Aluno* aluno){
  printf("Matricula: %d\n", aluno -> matricula);
}