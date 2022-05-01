#include <stdio.h>

int main(){
    int i, j, divisores;

    printf("Numeros primos de 1 a 150\n");
    for(i = 1; i<151; i++){
        divisores = 0;

        for(j = 1; j<=i; j++){
            if(i%j == 0){
                divisores += 1;
            }
        }

        if(divisores == 2){
            printf("%d \n", i);
        }
            
    }

    return 0;
}
