#include <stdio.h>

int main(){
    int qtd, pedido;
    float custo, precoUnitario;

    printf("Qual o codigo do seu pedido: \n");
    scanf("%d", &pedido);
    printf("Quantos voce ira querer? \n");
    scanf("%d", &qtd);

    switch(pedido){

        case 100:
        printf("Voce pediu %d cachorro quente. \n", qtd);
        precoUnitario = 10.1;
        break;

        case 101:
        printf("Voce pediu %d bauru simples. \n", qtd);
        precoUnitario = 8.3;
        break;

        case 102:
        printf("Voce pediu %d bauru com ovo. \n", qtd);
        precoUnitario = 8.5;

        break;

        case 103:
        printf("Voce pediu %d hamburger. \n", qtd);
        precoUnitario = 12.5;

        break;

        case 104:
        printf("Voce pediu %d cheeseburger. \n", qtd);
        precoUnitario = 13.25;
        break;

        default:
        printf("Erro no pedido, verifique o numero do pedido");
    }

        custo = precoUnitario * qtd;
        printf("O valor a ser pago e %.2f reais", custo);
}