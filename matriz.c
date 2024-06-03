  #include <stdio.h>

  int main(){

        int n=15;
        int m=15;
        int A [n][m];
        int i,j,c=1;
          for(i=0;i<n; i++){
            for(j=0;j<m; j++){
                if(i==j){
                     A[i][j]=1;
                }else{
                     A[i][j]=0;
                }
             
            }
         }
        for(i=0;i<n; i++){
            for(j=0;j<m; j++){
                printf(" %d", A[i][j]);
            }
            printf("\n");
        }
  }