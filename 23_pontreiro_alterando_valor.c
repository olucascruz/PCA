#include<stdio.h>

int main(){
    float var, *pointer;

    pointer = &var;

    var = 100;

    printf("var = %.2f \n",var);

    *pointer = 50;

    printf("var = %.2f",var);
    return 0;
}