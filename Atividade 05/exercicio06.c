#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Seu numero e par");
    }
}