#include <stdio.h>
//prototipo de função
void imprimir();

int maiorValor(int n1, int n2);

int main() {
    //chamada ou invocação da função
    imprimir();

    int numero1, numero2, retornoFuncao;
    printf("\nInsira os valores: ");
    scanf("%d %d", &numero1, &numero2);

    //chamada da função com retorno
    retornoFuncao = maiorValor(numero1, numero2);
    printf("Maior valor: %d\n", retornoFuncao);

    imprimir();

}

//implementação da função
void imprimir() {
    printf("Impressao do procedimento...");
}

int maiorValor(int n1, int n2) {
    if(n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}