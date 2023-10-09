#include <stdio.h>

int main(){
    float salario, totalSalario = 0;
    int numFilhos, totalFilhos = 0;
    float maiorSalario = 0;
    int numPessoas = 0;
    int numPessoasAte100 = 0;

    do{
        printf("Digite o salario (ou um valor negativo para finalizar): ");
        scanf("%f", &salario);

        if(salario >= 0){
            printf("Digite o numero de filhos: ");
            scanf("%d", &numFilhos);

            totalSalario += salario;
            totalFilhos += numFilhos;

            if(salario > maiorSalario){
                maiorSalario = salario;
            }

            if(salario <= 100.0){
                numPessoasAte100++;
            }

            numPessoas++;
        }
    }while(salario >= 0);

    float mediaSalario = totalSalario / numPessoas;

    float mediaFilhos = (float)totalFilhos / numPessoas;

    float percentualAte100 = (float)numPessoasAte100 / numPessoas * 100;

    printf("\nMedia do salario da populacao: %.2f\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: R$%.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualAte100);
}
