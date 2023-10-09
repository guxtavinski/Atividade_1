#include <stdio.h>

int main(){

    //8. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
    int anos, meses, dias, idadeDias;

    printf("====Descubra quantos dias de vida voce ja teve====\n");

    printf("Insira sua idade em anos, meses e dias: \n");
    printf("Anos: \n");
    scanf("%d", &anos);
    printf("Meses: \n");
    scanf("%d", &meses);
    printf("Dias: \n");
    scanf("%d", &dias);

    idadeDias = (anos * 365) + (meses * 30) + dias;

    printf("\nVoce viveu por %d dias. Parabens!", idadeDias);

}