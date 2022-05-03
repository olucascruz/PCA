#include <stdio.h>

int main(){
    int vector[9], i;

    for(i = 0; i < 10; i++){
    scanf("%d", &vector[i]);
    }

    for(i = 0; i < 10; i++){
    printf("%d \n", vector[i]-i);
    }    

    return 0;
}
