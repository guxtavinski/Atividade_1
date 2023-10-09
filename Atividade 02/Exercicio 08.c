#include <stdio.h>

int main(){

    //9. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    float salarioAntigo, porcentReajuste, salarioNovo;

    printf("===Calculadora Salarial===\n");

    printf("Insira o valor base do seu salario: \n");
    scanf("%f", &salarioAntigo);
    printf("Agora, insira o percentual de reajuste: \n");
    scanf("%f", &porcentReajuste);

    salarioNovo = salarioAntigo + ((salarioAntigo * porcentReajuste) / 100);

    printf("Apos o reajuste, o seu salario e de %.2f reais", salarioNovo);


}