#include<stdio.h>

int main(){
    int a, b, i;
    int tam = 4;
    int div[] = {1000, 100, 10, 1};
    int vetor_a[tam], vetor_b[tam], vetor_c[tam];

    printf("Digite o A :\n");
    scanf("%d",&a);

    printf("Digite o B :\n");
    scanf("%d",&b);

    for(i=0; i<tam; i++){
        vetor_a[i] = a/div[i];
        a = a%div[i];
    }

    for(i=0; i<tam; i++){
        vetor_b[i] = b/div[i];
        b = b%div[i];
    }

    for (i=0; i<tam; i++){
        vetor_c[i] = vetor_a[i] + vetor_b[i];
    }

    printf("O vetor C e igual a: \n");
    for (i =0; i<tam; i++){
        printf("%d ", vetor_c[i]);
    }

    return 0;
}