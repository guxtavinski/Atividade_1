#include <stdio.h>

int main(){
    int idade;
    char nome[10];

    printf("Insira seu nome: ");
    fgets(nome, 10, stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &idade);


    if(idade >= 18){
        printf("%s e maior de idade",nome);
        printf("\nSua idade e %d", idade);
    }else{
        printf("%s e menor de idade", nome);
    }

    printf("\nContinua...");
}