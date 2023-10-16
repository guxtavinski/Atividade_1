#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

void classificarIMC(float imc) {
    if (imc < 18.5) {
        printf("IMC: %.2f - Baixo peso\n", imc);
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("IMC: %.2f - Peso normal\n", imc);
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("IMC: %.2f - Sobrepeso\n", imc);
    } else {
        printf("IMC: %.2f - Obesidade\n", imc);
    }
}

int main() {
    float peso, altura;
    
    printf("Digite o peso em quilos: ");
    scanf("%f", &peso);
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    
    float imc = calcularIMC(peso, altura);
    classificarIMC(imc);
}