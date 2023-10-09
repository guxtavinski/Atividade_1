#include <stdio.h>
#include <string.h>

int main()
{
    /*6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 
    1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade*/
    int fruta, opcao, qtd, totalFruta;
    float totalCompra, precoFruta = 0;
    char nomeFruta[20];

    do{
        printf("Adicione uma fruta: 1- Abacaxi(5.00) 2- Maca (1.00) 3- Pera (4.00) e a quantidade");
        scanf("%d %d", &fruta, &qtd);

        switch(fruta){
            case 1:
                strcpy(nomeFruta, "Abacaxi");
                precoFruta = 5.00;
                totalFruta = qtd * precoFruta;
                totalCompra += totalFruta;
            break;
            case 2:
                strcpy(nomeFruta, "Maca");
                precoFruta = 1.00;
                totalFruta = qtd * precoFruta;
                totalCompra += totalFruta;
            break;
            case 3:
                strcpy(nomeFruta, "Pera");
                precoFruta = 4.00;
                totalFruta = qtd * precoFruta;
                totalCompra += totalFruta;
            break;
            default:
                strcpy(nomeFruta, "Fruta invalida");
                totalFruta = 0;
                totalCompra += totalFruta;

        }

        printf("Fruta adicionada: %s \n Preco: %.2f \n Quantidade: %d\n Preco total da fruta: %d", nomeFruta, precoFruta, qtd, totalFruta);
        
        printf("Deseja adicionar mais frutas? \n1- Sim \t 2- Nao");
        scanf("%d", &opcao);
    }while(opcao != 2);

    printf("Total da compra %.2f reais", totalCompra);
}