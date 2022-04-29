#include <stdio.h>

int main(){
    int num1, num2, suma;

    printf("Escreva um numero para ser somado: ");
    scanf("%d", &num1);

    printf("Escreva outro numero para ser somado: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("Resultado: %d", suma);

    return 0;
}
