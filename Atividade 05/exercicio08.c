#include <stdio.h>

int main(){
    int idade, tempoServico;

    printf("Insira sua idade: \n");
    scanf("%d", &idade);
    printf("Insira o seu tempo de servico: \n");
    scanf("%d", &tempoServico);

    if(idade >= 65 || tempoServico >= 30 ||(idade >= 60 && tempoServico >= 25)){
        printf("Voce pode se aposentar");
    }else{
        printf("Voce nao pode se aposentar ainda");
    }
}