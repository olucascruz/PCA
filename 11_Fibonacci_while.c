#include <stdio.h>

int main(){
    int ant, aux, prox, cont;

    printf("20 primeiros termos da sequencia de Fibonacci: \n");
    cont = 1;
    ant = 1;
    aux = 0;
    printf("%d ", ant);

    while (cont < 20)
    {
        prox = ant + aux;
        aux = ant;
        ant = prox;
        printf("%d ", ant);
        
        cont += 1;
    }
    
    return 0;
}
