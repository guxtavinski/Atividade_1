#include <stdio.h>

int main(){

    //10. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

    float custoNovo, custoFabrica;
    float porcDistribuidor = 0.28;
    float impostos = 0.45;

    printf("=====Calcule quanto custara o seu carro novo===== \n");

    printf("Insira o valor dele de fabrica: \n");
    scanf("%f", &custoFabrica);

    custoNovo = custoFabrica + (custoFabrica * porcDistribuidor) + (custoFabrica * impostos);

    printf("O preco final do seu carro e %.2f reais", custoNovo);

}