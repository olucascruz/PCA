#include<stdio.h>


int main(){
    int i, j, maior, menor, tam;
    tam = 2;
    int mat[tam][tam]; 

    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d]\n", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
    maior = mat[0][0];
    menor = mat[0][0];
    for(i = 0; i<2; i++)
    {
        if (maior < mat[i][i])
        {
            maior = mat[i][i];
        }
        if(menor > mat[i][i])
        {
            menor = mat[i][i];
        }
    }

    printf("O maior = %d \n", maior);
    printf("O menor = %d \n", menor);

    return 0;
}
