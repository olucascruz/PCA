#include<stdio.h>

int main(){
    int i, j, tam;
    tam = 3;
    int mat[tam][tam], mat_2[tam][tam], mat_3[tam][tam]; 


    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d] da matriz 1\n", i, j);
            scanf("%d",&mat[i][j]); 
        }
    }

    printf("\n");
    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d] da matriz 2\n", i, j);
            scanf("%d",&mat_2[i][j]); 
        }
    }

    printf("Matriz 3: \n");
    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {   
            if(mat[i][j] >= mat_2[i][j]){
                mat_3[i][j] = mat[i][j];
            }
            else{
                mat_3[i][j] = mat_2[i][j];
            }

            printf("%d  ",mat_3[i][j]);
        }
        printf("\n"); 
    }

    return 0;

}