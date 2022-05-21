#include<stdio.h>

int main(){
    int i, j, tam;
    tam = 3;
    int mat[tam][tam], trans[tam][tam]; 

    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d]\n", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            trans[i][j] = mat[j][i];
            printf("%d \t", trans[i][j]); 
        }
            printf("\n"); 

    }

    return 0;
}