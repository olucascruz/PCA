#include<stdio.h>

int main(){
    int i, j, tam;
    tam = 2;
    int mat[tam][tam]; 


    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            mat[i][j] = i*j; 
        }
    }
    
    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

}