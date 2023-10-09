#include <stdio.h>

int main(){
    char olhos, cabelos, sexo;
    int contadorGeral = 0, contadorM = 0, contadorF = 0, contadorEspecifico = 0, opcao, idade;
    float salario, porcentagem;

    do{
        contadorGeral++;
        //validação sexo
        do{
            fflush(stdin);
            printf("Digite o sexo: (M ou F)\n");
            scanf("%c", &sexo);
            if(sexo == 'm'){
                contadorM++;
            }else if(sexo == 'f'){
                contadorF++;
            }

            if(sexo != 'm' && sexo != 'f'){
                printf("Opcao invalida\n");
            }
        }while(sexo != 'm' && sexo != 'f');

        //validação cor dos olhos
        do{
            fflush(stdin);
            printf("Digite a cor dos olhos: (c - castanho, p - pretos, v - verdes, a - azuis)\n");
            scanf("%c", &olhos);
            if(olhos != 'c' && olhos != 'p' && olhos != 'v' && olhos != 'a'){
                printf("Opcao invalida\n");
            }
        }while(olhos != 'c' && olhos != 'p' && olhos != 'v' && olhos != 'a');

        //validação cor dos cabelos
        do{
            fflush(stdin);
            printf("Digite a cor dos cabelos: (l - loiro, c - castanhos, p - pretos, r - ruivos)\n");
            scanf("%c", &cabelos);
            if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
                printf("Opcao invalida\n");
            }
        }while(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        do{
            printf("Digite o salario: \n");
            scanf("%f", &salario);

            if(salario < 0){
            printf("Numero invalido\n");
            }

        }while(salario < 0);

        do{
            printf("Digite a idade: \n");
            scanf("%d", &idade);

            if(idade < 10 || idade >100){
            printf("Numero invalido\n");
            }

        }while(salario < 0);

        if(sexo == 'f' && olhos == 'c' && cabelos == 'p' && (idade > 15 && idade < 35)){
            contadorEspecifico++;
        }


        printf("Deseja cadastrar um novo habitante? (1: Sim) (-1: Nao)\n");
        scanf("%d", &opcao);

    }while(opcao != -1);
    

    porcentagem = (float)contadorEspecifico / contadorGeral * 100;

    printf("Total geral: %d\n", contadorGeral);
    printf("Total homens: %d\n", contadorM);
    printf("Total mulheres: %d\n", contadorF);
    printf("Total caracteristicas especificas: %d\n", contadorEspecifico);
    printf("Porcentagem caracteristicas especificas: %.1f%% \n", porcentagem);
}