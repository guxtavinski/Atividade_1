#include <stdio.h>

int main(){

    //3. Dadas as medidas de uma sala, informe sua área.
    int base, altura, area;

    printf("Insira o tamanho da base da sala em metros: \n");
    scanf("%d", &base);
    printf("Insira o tamanho da altura da sala em metros: \n");
    scanf("%d", &altura);

    area = base * altura;

    printf("A sala possui: %d metros quadrados", area);

}