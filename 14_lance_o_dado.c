#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int i, j, dado, vetor[99];
    srand(time(NULL));

    for(i = 0; i < 100; i++){
        dado = (rand()%6)+1;
        vetor[i] = dado;
    }
    
    int possiveis_num[6] = {0, 0, 0, 0, 0, 0};
    for(i = 0; i< 100; i++){
        for(j = 1; j < 7; j++){
            if(vetor[i] == j){
                possiveis_num[j-1]++;
            }
        }
           
    }

   for(i = 0; i < 6; i++){
       printf("O valor %d apareceu %d vezes \n", i+1, possiveis_num[i]);
   }

    return 0;
}
