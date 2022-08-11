#include<stdio.h>


int main(){
    int inteiro, *pInteiro;
    float real, *pReal;
    
    pInteiro = &inteiro;
    pReal = &real;

    printf("inteiro = %d, real = %.2f\n", inteiro, real);
    *pInteiro = 54;
    *pReal = 50.45;
    printf("inteiro = %d, real = %.2f\n", inteiro, real);

    return 0;    
}