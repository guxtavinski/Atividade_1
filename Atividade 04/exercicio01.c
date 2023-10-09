#include <stdio.h>
#include <math.h>

int main(){
    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
    int numero, raiz, quadrado;

    printf("Insira o numero: \n");
    scanf("%d", &numero);

    //decidir o fluxo de execução do algoritmo
    if(numero >= 0){
        raiz = sqrt(numero);
        printf("A raiz do numero e %d.", raiz);
    }else{
        quadrado = pow(numero, 2);
        printf("O quadrado do numero e %d.", quadrado);
    }

}