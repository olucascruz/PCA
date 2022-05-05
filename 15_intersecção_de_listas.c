#include<stdio.h>

int main(){
    int list1[10], list2[10], list3[10], pesq, i, j;

    printf("Digite 10 valores para uma lista \n");
    for(i = 0; i < 10; i++){
        printf("%d - ", i+1 );
        scanf("%d", &list1[i]);
        list3[i] = 0;
    }

    printf("Digite 10 valores para uma outra lista \n");
    for(i = 0; i < 10; i++){
        printf("%d - ", i+1 );
        scanf("%d", &list2[i]);
    }

    for(i = 0; i < 10; i++){
        pesq = list1[i];
        for(j = 0; j < 10; j++){
            if(list2[j] == pesq){
                list3[j] = pesq;
                break;  
            }
        }
    }

    for(i = 0; i < 10; i++){
        pesq = list3[i];
        for(j = 0; j < 10; j++){
            if(list3[j] == pesq && pesq == 0){
                list3[j] = 0;
                break;  
            }
        }
    }
    

    for(i = 0; i < 10; i++){
         if (list3[i] != 0){
                printf("%d \n", list3[i]);
        }
     }

    return 0;
}