#include<stdio.h>

int main(){
    int v[10], i, *maior, *menor;
    
    printf("Insira numeros inteiros no vetor: \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        
        if(i == 0){
        maior = &v[i];
        menor = &v[i];
        }

        if(v[i] > *maior){
            maior = &v[i];
        }
        if(v[i] < *menor){
            menor = &v[i];
        }
    }

        printf("Maior + Menor = %d \n", *maior + *menor);

    
    return 0;
}