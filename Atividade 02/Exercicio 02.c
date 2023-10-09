#include <stdio.h>

int main(){

    //2. Escreva um programa que receba um número qualquer e mostre o seu dobro.
    int numero, dobro;

    printf("Digite o numero: \n");
    scanf("%d", &numero);
    
    dobro = numero * 2;

    printf("O dobro do numero inserido e: %d", dobro);
}