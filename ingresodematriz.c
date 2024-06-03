  #include <stdio.h>

  int main(){

        int A [3][4];
        printf("Ingrese valores para la matriz de 3x4\n\n");

        for(int i=0;i<3; i++){
            for(int j=0;j<4; j++){
                printf(" Elemento [%d , %d]:",i,j);
                scanf("%d",&A[i][j]);
            }
        }
         printf("\n\nElementos almacenados en la tabla  :\n\n");
        for(int i=0;i<3; i++){
            for(int j=0;j<4; j++){
                
                printf(" %d ", A[i][j]);
            }
            printf("\n");
        }
        
  }