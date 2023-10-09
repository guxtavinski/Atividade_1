#include <stdio.h>

int main(){
    float salario, salarioMin = 1320.00;
    
    printf("Digite o valor do salario: \n");
    scanf("%f", &salario);

    if(salario > salarioMin){
        printf("O salario esta acima do minimo");
        printf("\nSeu salario e de %.2f reais", salario);
    }else if(salario == salarioMin){
        printf("O salario esta igual ao minimo");
    }else{
        printf("O salario esta abaixo do minimo");
    }

}