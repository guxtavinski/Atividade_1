#include <stdio.h>

void imprimirMesEDias(int numero) {
    char *meses[] = {
        "janeiro",
        "fevereiro",
        "março",
        "abril",
        "maio",
        "junho",
        "julho",
        "agosto",
        "setembro",
        "outubro",
        "novembro",
        "dezembro"
    };
    
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (numero >= 1 && numero <= 12) {
        printf("Entrada = %d. Saida = %s com %d dias.\n", numero, meses[numero - 1], dias[numero - 1]);
    } else {
        printf("Número fora do intervalo válido (1 a 12).\n");
    }
}

int main() {
    int numeroMes;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numeroMes);
    
    imprimirMesEDias(numeroMes);
}