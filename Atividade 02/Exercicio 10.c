#include <stdio.h>

int main (){

    //11. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
    int carrosVendidos;
    float valorTotal, salarioFixo, comissao, salarioTotal;
    float bonus = 0.05;

    printf("======Calculadora Salarial====== \n");

    printf("Insira a quantidade de carros vendidos nesse mes: \n");
    scanf("%d", &carrosVendidos);
    printf("Insira o valor total de vendas: \n");
    scanf("%f", &valorTotal);
    printf("Insira o valor de seu salario fixo: \n");
    scanf("%f", &salarioFixo);
    printf("Por ultimo, insira o valor da comissao por carro vendido: \n");
    scanf("%f", &comissao);

    salarioTotal = salarioFixo + (comissao * carrosVendidos) + (valorTotal * bonus);

    printf("Voce recebera %.2f reais", salarioTotal);

}