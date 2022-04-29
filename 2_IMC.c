#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("Seu indice de massa corporal e %.2f\n", imc);


    printf("classificacao: ");
    
    if(imc < 18.5){
        printf("Magreza");    
    } else if(imc > 18.5 && imc < 24.9){
        printf("Normal");
    }else if(imc > 24.9 && imc < 25.5){
        printf("Sobrepeso");
    }else if(imc > 25.5 && imc < 29.9){
        printf("Obesidade");
    }else if(imc > 29.9 && imc < 40){
        printf("Obesidade Grave");
    }

    return 0;
}
