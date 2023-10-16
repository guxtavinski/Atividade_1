#include <stdio.h>

float calcularVolumeCilindro(float altura, float raio) {
    float volume;
    float pi = 3.1414592;
    
    volume = pi * raio * raio * altura;
    
    return volume;
}

int main() {
    float altura, raio;
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    float volumeCilindro = calcularVolumeCilindro(altura, raio);
    
    printf("O volume do cilindro é: %.2f\n", volumeCilindro);

}