#include <stdio.h>

int main(){
    int num;

    printf("Digite o numero: \n");
    scanf("%d", &num);

    if(num == 5){
        printf("O numero e igual a 5");
    }else if(num == 200){
        printf("O numero e igual 200");
    }else if(num == 400){
        printf("O numero e igual a 400");
    }else if(num > 500 && num < 1000){
        printf("O numero esta entre 500 e 1000");
    }else{
        printf("O numero esta fora dos padroes anteriores");
    }
}