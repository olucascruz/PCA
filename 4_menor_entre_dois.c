#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("%d e menor que %d", num2, num1);
    }else if(num2 > num1){
        printf("%d e menor que %d", num1, num2);
    }else if(num2 == num1){
        printf("%d e igual a %d", num2, num1);
    }

    return 0;
}