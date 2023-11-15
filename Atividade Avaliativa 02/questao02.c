#include <stdio.h>

char validaSexo(){
    char sexo;
    do{
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Sexo invalido. Digite M ou F.\n");
        }
    }while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    return sexo;
}
float validaSalario(){
    float salario;
    do{
        printf("Digite o salario em reais (maior que R$1,00): ");
        scanf("%f", &salario);

        if (salario <= 1.00) {
            printf("Salario invalido. Digite um valor maior que R$1,00.\n");
        }
    }while(salario <= 1.00);

    return salario;
}

int classificaSalario(float salario, float salarioMinimo){
    if(salario < salarioMinimo) {
        return -1;
    }else{
        return 1;
    }
}

void mostraClassificacao(float salario, float salarioMinimo, char sexo){
    printf("\nSalario: R$ %.2f\n", salario);
    int resultadoClassificacao = classificaSalario(salario, salarioMinimo);
    printf("Classificacao em relacao ao salario minimo: %s do salario minimo\n", (resultadoClassificacao == -1) ? "Abaixo" : "Acima");
    printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
}

int main(){
    int totalAbaixo = 0, totalAcima = 0;
    int status;

    do{
        char sexo = validaSexo();
        float salario = validaSalario();
        float salarioMinimo = 1400.00;
        int resultadoClassificacao = classificaSalario(salario, salarioMinimo);

        if(resultadoClassificacao == -1){
            totalAbaixo++;
        }else{
            totalAcima++;
        }

        mostraClassificacao(salario, salarioMinimo, sexo);

        printf("\nDeseja processar outro assalariado? (1- Sim\t2- Nao): ");
        scanf(" %d", &status);
    }while(status == 1);

    printf("\nTotal de assalariados abaixo do salario minimo: %d\n", totalAbaixo);
    printf("Total de assalariados acima do salario minimo: %d\n", totalAcima);
}