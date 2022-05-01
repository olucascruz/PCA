#include <stdio.h>

int main(){
    int i, num, maior;

    printf("Digite 5 numeros inteiros: \n");
    printf("1- ");
    scanf("%d", &num);
    maior = num;
    
    for(i = 1; i < 5; i++){
        printf("%d- ", i+1);
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
    }

    printf("%d e o maior numero digitado", maior);

    return 0;
}    