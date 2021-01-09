typedef struct{
  char nome[50];
  int matricula;
  int semestre;
  char curso[50];
  float coeficiente;
}Aluno;

void novoAluno(Aluno* aluno, char nome[50],int matricula, int semestre, char curso[50], float coeficiente);
void Coeficiente(Aluno* aluno);
void SemestreRestante(Aluno* aluno);
void Curso(Aluno* aluno);
void Matricula(Aluno* aluno);