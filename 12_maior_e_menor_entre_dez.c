#include <stdio.h>

int main(){
    int i, menor, maior, maior_i, menor_i, num, list[9];

    menor = 1000000;
    maior = 0;

    printf("Digite dez idades: \n");
    for(i = 0; i < 10; i++){
        printf("%d - ", i+1);
        scanf("%d", &list[i]);
    
        if(list[i]> maior){
            maior = list[i];
            maior_i = i;
        }
        if(list[i]< menor){
            menor = list[i];
            menor_i = i;
        }
    }
    printf("%d e a maior idade e esta no indice %d do vetor \n", maior, maior_i);
    printf("%d e a menor idade e esta no indice %d do vetor", menor, menor_i);
    
    return 0;
}
