#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Insira a nota da sua primeira prova: \n");
    scanf("%f", &nota1);
    printf("Insira a nota da sua segundaa prova: \n");
    scanf("%f", &nota2);
    printf("Insira a nota da sua terceira prova: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 3;

    printf("Sua nota e %.2f pontos.\n", media);
    if(media >= 7){
        printf("Parabens, voce foi aprovado");
    }else{
        printf("Voce foi reprovado.");
    }
}