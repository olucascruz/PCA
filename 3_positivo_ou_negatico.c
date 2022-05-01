#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero digitado e: ");

    if(num > 0){
        printf("Positivo");
    }else if(num < 0){
        printf("Negativo");
    }else{
        printf("Neutro");
    }

    return 0;
}
