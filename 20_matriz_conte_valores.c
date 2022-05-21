#include<stdio.h>

int main(){
    int i, j, tam;
    tam = 3;
    int mat[tam][tam], cont = 0; 


    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d]\n", i, j);
            scanf("%d",&mat[i][j]);

            if(mat[i][j] > 10){
                cont += 1;
            }
        }
    }

    printf("A matriz tem %d valores maiores que 10", cont);

    return 0;
}