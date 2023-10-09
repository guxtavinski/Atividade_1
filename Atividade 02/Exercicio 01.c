#include <stdio.h>

int main(){

    //1. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.
    
    int num1, num2, resultSoma, resultSub, resultMulti;
    float resultDivisao;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    resultSoma = num1 + num2;
    resultSub = num1 - num2;
    resultMulti = num1 * num2;
    resultDivisao = (float)num1 / num2;

    printf("\n O resultado da soma dos numeros e: %d", resultSoma);
    printf("\n O resultado da subtracao dos numeros e: %d", resultSub);
    printf("\n O resultado da multiplicacao dos numeros e: %d", resultMulti);
    printf("\n O resultado da divisao e: %.2f", resultDivisao);
}