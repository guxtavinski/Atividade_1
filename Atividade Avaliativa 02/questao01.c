#include <stdio.h>

int validaQuantidade(){
    int quantidade;
    do{
        printf("Digite a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Quantidade invalida. Digite um valor maior ou igual a 0.\n");
        }
    }while(quantidade < 0);

    return quantidade;
}

float calculaSalario(int quantidade){
    float salario = 600;

    if(quantidade > 50){
        salario += (quantidade - 50) * 0.50;

        if (quantidade > 80){
            salario += (quantidade - 80) * 0.25;
        }
    }

    return salario;
}
void mostraFinal(int quantidade, float salario) {
    printf("\nFuncionario fabricou %d pecas e recebera um salario de R$ %.2f\n", quantidade, salario);
}

int main() {
    int quantidade;
    int status;

    do{
        quantidade = validaQuantidade();

        float salario = calculaSalario(quantidade);

        mostraFinal(quantidade, salario);

        printf("\nDeseja verificar outro funcionario? (1- Sim\t0- Nao): ");
        scanf(" %d", &status);
    }while(status == 1);
}