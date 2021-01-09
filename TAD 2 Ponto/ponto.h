typedef struct{
  float x;
  float y;
}Ponto;


/*
  Aloca e retorna um ponto com coordenadas x e y
*/
   Ponto* criar_ponto(float x, float y);




/*
  Libera a memoria de um ponto
*/
   void liberar_ponto(Ponto* p);
   



/*
  Retorna os valores das coordenadas de um ponto
*/   
   void acessar_ponto(Ponto* p, float*x, float*y);
   



/*
  Atribui valores as coordenadas de um ponto
*/   
   void atribuir_valores(Ponto *p, float x, float y);
   


/*
  Retorna a distancia entre dois pontos
*/  
   float distancia(Ponto* p1, Ponto* p2);