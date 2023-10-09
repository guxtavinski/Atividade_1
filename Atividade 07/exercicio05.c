#include <stdio.h>

int main() {
    int n = 1;
    int contador = 0;
    int soma = 0;

    printf("A soma dos 50 primeiros numeros pares e:\n");

    while (contador < 50) {
        if (n % 2 == 0) {
            soma += n;
            contador++;
        }
        n++;
    }

    printf("%d\n", soma);
}
