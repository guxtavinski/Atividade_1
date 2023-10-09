#include <stdio.h>
#include <math.h>

int main (){

    //7. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
    double pi = 3.14159265358979323846;
    double raio, area;

    printf("Qual o raio do circulo?\n");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);

    printf("A area do circulo e: %.2lf metros \n", area);


}