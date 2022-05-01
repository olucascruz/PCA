#include <stdio.h>

int main(){
    int num, contador, nums, media;

    printf("Digite os numeros inteiros para saber a media. -Digite -1 para finalizar, e a media ser calculada: \n");
    
    scanf("%d", &num);
    nums = num;
    contador = 1; 
    while(num != -1){
        scanf("%d", &num);
        if(num != -1){
        nums += num;
        contador += 1;
        }
    }

    media = nums/contador;
    printf("A media e %d", media);

    return 0;
}
