#include<stdio.h>

int main(){
    int i, j, cont, tam;
    tam = 3;
    int mat[tam][tam], soma = 0; 

    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            printf("Digite o elemento [%d][%d]\n", i, j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    cont = tam-1;
    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<tam; j++)
        {
            if( i == j){
                soma += mat[i][j];
            }
            if(j == cont){
                soma += mat[i][j];
            }
        }
            cont -= i;


    }
    printf("\n");
    printf("Soma da diagonal principal com a secundaria: %d", soma);


    return 0;    
}