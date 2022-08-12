#include<stdio.h>
#include <stdlib.h>


int main(){
    int tamanho;
    float *lista;

    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &tamanho);

    lista = (float *) malloc(sizeof(float) * tamanho);
    

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um numero para a posicao %d do vetor: \n", i);
        scanf("%f",&lista[i]);
    }

    printf("O tamanho em bytes e %d \n", sizeof(lista));
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.2f \n",lista[i]);
    }

    free(lista);
    lista = NULL;

    return 0;
}
