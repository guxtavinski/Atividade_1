#include <stdio.h>

int main(){
    float A, B, C;

    printf("Insira os valores dos lados A, B e C do triangulo: ");
    scanf("%f %f %f", &A, &B, &C);

    if(A <= 0 || B <= 0 || C <= 0){
        printf("Os valores dos lados devem ser positivos.\n");
    }else{
        if(A + B > C && A + C > B && B + C > A) {
            if(A == B && B == C) {
                printf("Triangulo equilatero\n");
            }else if(A == B || A == C || B == C) {
                printf("Triangulo isosceles\n");
            }else{
                printf("Triangulo escaleno\n");
            }
        }else{
            printf("Esses valores nao podem formar um triangulo.\n");
        }
    }
}
