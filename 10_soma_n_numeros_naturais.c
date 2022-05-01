#include <stdio.h>

int main(){
    int n, soma, cont;

    printf("Digite um numero inteito: ");
    scanf("%d", &n);
    cont = 0;
    soma = 0;

    // n-1 considera o 0 natural.
    while (cont != n-1)
    {
        cont += 1;
        soma += cont;
    }

    printf("a soma dos n primeiros numeros e %d", soma);
    
    return 0;
}
