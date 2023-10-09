#include <stdio.h>

int main(){

    int N, contador = 1;

    printf("Insira um numero inteiro positivo: \n");
    scanf("%d", &N);

    while(N > 0){
        printf("(%d)", contador);
        contador += 2;
        N--;
    }
}
