#include <stdio.h>

float calcularVolumeEsfera(float raio) {
    float volume;
    float pi = 3.1414592;
    
    volume = (4 / 3) * pi * raio * raio * raio;
    
    return volume;
}

int main() {
    float raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    float volumeEsfera = calcularVolumeEsfera(raio);
    
    printf("O volume da esfera eh: %.2f\n", volumeEsfera);
}