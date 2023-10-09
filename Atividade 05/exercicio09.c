#include <stdio.h>

int main(){
    int tempoServico;
    float salario, reajuste, salarioFinal;

    printf("Insira seu salario: \n");
    scanf("%f", &salario);

    printf("Quantos anos de servico voce possui?");
    scanf("%d", &tempoServico);

    printf("Seu salario era %.2f reais \n", salario);

    if(salario <= 500){

        reajuste = salario + (salario * 0.25);

        if(tempoServico >= 1 && tempoServico <=3){
            salarioFinal = reajuste + 100;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 4 && tempoServico <= 6){
            salarioFinal = reajuste + 200;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 7 && tempoServico <= 10){
            salarioFinal = reajuste + 300;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico > 10){
            salarioFinal = reajuste + 500;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else{
            printf("\nVoce nao recebera bonus, seu salario sera %.2f", reajuste);
        }

    }else if(salario > 500 && salario <= 1000){
        reajuste = salario + (salario * 0.20);

        if(tempoServico >= 1 && tempoServico <=3){
            salarioFinal = reajuste + 100;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 4 && tempoServico <= 6){
            salarioFinal = reajuste + 200;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 7 && tempoServico <= 10){
            salarioFinal = reajuste + 300;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico > 10){
            salarioFinal = reajuste + 500;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else{
            printf("\nVoce nao recebera bonus, seu salario sera %.2f", reajuste);
        }

    }else if(salario > 1000 && salario <= 1500){
        reajuste = salario + (salario * 0.15);

        if(tempoServico >= 1 && tempoServico <=3){
            salarioFinal = reajuste + 100;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 4 && tempoServico <= 6){
            salarioFinal = reajuste + 200;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 7 && tempoServico <= 10){
            salarioFinal = reajuste + 300;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico > 10){
            salarioFinal = reajuste + 500;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else{
            printf("\nVoce nao recebera bonus, seu salario sera %.2f", reajuste);
        }

    }else if(salario > 1500 && salario <= 2000){
        reajuste = salario + (salario * 0.10);

        if(tempoServico >= 1 && tempoServico <=3){
            salarioFinal = reajuste + 100;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 4 && tempoServico <= 6){
            salarioFinal = reajuste + 200;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 7 && tempoServico <= 10){
            salarioFinal = reajuste + 300;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico > 10){
            salarioFinal = reajuste + 500;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else{
            printf("\nVoce nao recebera bonus, seu salario sera %.2f", reajuste);
        }

    }else{
        printf("Voce nao recebera reajuste salarial\n");
        
        if(tempoServico >= 1 && tempoServico <=3){
            salarioFinal = salario + 100;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 4 && tempoServico <= 6){
            salarioFinal = salario + 200;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico >= 7 && tempoServico <= 10){
            salarioFinal = salario + 300;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else if(tempoServico > 10){
            salarioFinal = salario + 500;
            printf("Voce recebera %.2f reais no proximo mes", salarioFinal);
        }else{
            printf("Voce nao recebera bonus, seu salario sera %.2f", salario);
        }
    }

}