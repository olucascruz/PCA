#include<stdio.h>

int main(){
    int variavel_1, variavel_2;

    if(&variavel_1 > &variavel_2){
        printf("%p > %p", &variavel_1, &variavel_2);
    }else{
        printf("%p > %p",  &variavel_2, &variavel_1);
    }

    return 0;
}