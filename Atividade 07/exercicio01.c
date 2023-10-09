#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: \n");
    scanf("%d", &numero);

    for(int c = 0; c <= numero; c++)
    {
        printf("\n %d", c);
    }
}