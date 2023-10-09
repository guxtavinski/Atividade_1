#include <stdio.h>
#include <math.h>

int main(){

    double x, funcao;

    printf("Insira o valor de x: \n");
    scanf("%lf", &x);

    if(x * x - 16 <= 0){
        printf("Esse numero nao e valido para a funcao");
    }else{
        funcao = (5 * x + 3) / sqrt(pow(x, 2) - 16);
        printf("O valor de f(x) e %.2lf\n", funcao);
    }
}