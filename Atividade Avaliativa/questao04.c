#include <stdio.h>

int main() {
    float A, B, C;
    float maiorLado;

    printf("Insira os valores dos lados A, B e C do triangulo: ");
    scanf("%f %f %f", &A, &B, &C);

    if(A <= 0 || B <= 0 || C <= 0) {
        printf("Os valores dos lados devem ser positivos.\n");
    }else{
        if(A + B > C && A + C > B && B + C > A) {
            if(A >= B && A >= C) {
                maiorLado = A;
            }else if(B >= A && B >= C) {
                maiorLado = B;
            }else{
                maiorLado = C;
            }

            if(maiorLado * maiorLado == A * A + B * B + C * C - maiorLado * maiorLado) {
                printf("Triangulo retangulo (angulo = 90 graus).\n");
            }else if(maiorLado * maiorLado > A * A + B * B + C * C - maiorLado * maiorLado) {
                printf("Triangulo obtuso (angulo > 90 graus).\n");
            }else{
                printf("Triangulo agudo (angulo < 90 graus).\n");
            }
        }else{
            printf("Valores invalidos.\n");
        }
    }
}
