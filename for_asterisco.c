#include <stdio.h>

int main(){
    int i, j, vezes;

    printf("Digite um numero inteiro: ");
    scanf("%d", &vezes);

    for(i = 1; i<=vezes; i++){

        for(j = 1; j<=i; j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}