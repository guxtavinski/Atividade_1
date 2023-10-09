#include <stdio.h>

int main(){
    float peso;
    char nome [10];

    printf("Insira seu nome: ");
    fgets(nome, 10, stdin);

    printf("Insira o seu peso: ");
    scanf("%f", &peso);

    if(peso < 60){
        printf("Seu peso esta abaixo de 60kg\n");
        printf("Que pena %s, parece que voce esta precisando de um suco", nome);
    }else{
        printf("Seu peso e maior ou igual a 60kg\n");
        printf("QUEM VOCE PENSA QUE E %s? Chris Bumstead, o Cbum?", nome);
    }

}