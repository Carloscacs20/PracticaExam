#include <stdio.h>

  int main(){

        int n=3;
        int m=5;
        int A [3][5]= {{51,22,33,49,51},{12,22,34,84,95},{19,21,23,15,57}};
        int i,j,c=-1,f=-1;
        int dato=34;

        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
               if(A[i][j]==dato){
                    f=i+1;
                    c=j+1;
                    break;
               }
            }
            if (c!=-1)
            {
               break;
            }
            
        }
        if(c==-1 && f==-1){
            printf("El dato no esta en el arreglo\n");
        }else{
            printf("El dato se encuentra el la fila %d y la columna %d\n ",f,c);
        }

  }