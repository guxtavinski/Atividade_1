#include <stdio.h>

float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    float temperaturaCelsius;
    temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0/9.0);
    return temperaturaCelsius;
}

int main() {
    float temperaturaFahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    float temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);
}