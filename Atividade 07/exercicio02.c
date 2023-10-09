#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: \n");
    scanf("%d", &numero);

    for(int c = numero; c >= 0; c--)
    {
        printf("\n %d", c);
    }
}