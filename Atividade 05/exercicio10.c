#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, delta;

    printf("Insira o valor de A: \n");
    scanf("%f", &A);
    printf("Insira o valor de B: \n");
    scanf("%f", &B);
    printf("Insira o valor de C: \n");
    scanf("%f", &C);


    if(A == 0){
        printf("Nao e equacao de segundo grau");
    }else{
        delta = pow(B, 2) - 4 * A * C;

        if(delta < 0){
            printf("Nao existe raiz");
        }else if(delta == 0){
            double raiz1 = -B / (2 * A);
            printf("A raiz %lf e unica", raiz1);
        }else{
            double raiz1 = ((- B + sqrt(delta)) / (2 * A));
            double raiz2 = ((- B - sqrt(delta)) / (2 * A));
            printf("As raizes sao %lf %lf", raiz1, raiz2);
        }
    }
}