#include <stdio.h>

int main() {
    int n = 3;
    int contador = 0;

    printf("Os cinco primeiros multiplos de 3 maiores que 0 sao:\n");

    while (contador < 5) {
        if (n % 3 == 0) {
            printf("(%d)", n);
            contador++;
        }
        n++;
    }

}
