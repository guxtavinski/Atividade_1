#include <stdio.h>

int main (){

    //5. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
    float taxaDolar = 4.97;
    float valorReais, valorDolar;

    printf("A cotacao do dolar hoje e de %.2f reais.", taxaDolar);
    printf("\nInsira o valor a ser convertido para dolar: \n");
    scanf("%f", &valorReais);
    
    valorDolar = valorReais / taxaDolar;

    printf("Atualmente %.2f reais valem %.2f dolares", valorReais, valorDolar);
}