#include <stdio.h>

int main(){

    //6. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
    float custoMercadoria, valorFrete, despesas, gastos, valorVenda, porcentLucro;

    printf("=====Calculadora de Lucro======\n");

    //Coletar dados
    printf("\nQuanto foi gasto com a mercadoria? \n");
    scanf("%f", &custoMercadoria);
    printf("\nInsira o valor do frete: \n");
    scanf("%f", &valorFrete);
    printf("\nQuanto foi gasto com eventuais despesas? \n");
    scanf("%f", &despesas);

    //Efetuar calculo de gasto

    gastos = custoMercadoria + valorFrete + despesas;

    //Coletar valor de venda
    printf("\nPor quanto foi vendido o produto? \n");
    scanf("%f", &valorVenda);

    //Calcular lucro ([receita/gastos] * 100)
    porcentLucro = (valorVenda / gastos) * 100;

    printf("O lucro de sua venda foi de: %.1f porcento", porcentLucro);

}