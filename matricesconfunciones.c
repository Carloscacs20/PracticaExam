#include <stdio.h>
#define F 3
#define C 4

void datos(int matriz[][C]);
void imprime(int matriz[][C]);
void suma(int matriz[][C]);
  int main(){


        int matriz[F][C];
        datos(matriz);
        imprime(matriz);
        suma(matriz);
      
  }
  void datos(int matriz[][C]){
    for (int i = 0; i < F; i++)
    {
       for (int j = 0; j < C; j++)
       {
        printf("Introduce el valor de la posicion (%d,%d):",i,j);
        scanf("%d",&matriz[i][j]);
       }
       
    }
    
  }
  void imprime(int matriz[][C]){
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
           printf("%d",matriz[i][j]);
        }
       printf("\n");
    }
    
  }
  void suma(int matriz[][C]){
    int suma=0;
    for (int i = 0; i < F; i++)
    {
        suma=0;
        for (int j = 0; j < C; j++)
        {
           suma+=matriz[i][j];
        }
        printf("Fila %d || Total: %d\n",i,suma);
    }
    printf("\n");
  }