#include <stdio.h>

int main(){
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;

    do{
        printf("Digite o codigo do candidato (ou 0 para finalizar): ");
        scanf("%d", &voto);

        switch (voto){
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                if(voto != 0){
                    printf("Codigo de voto invalido.\n");
                }
                break;
        }
    }while(voto != 0);

    printf("\nTotal de votos para cada candidato:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Total de votos nulos: %d votos\n", votosNulos);
    printf("Total de votos em branco: %d votos\n", votosEmBranco);
}
