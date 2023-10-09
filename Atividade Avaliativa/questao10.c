#include <stdio.h>
#include <string.h>

int main(){
    //Salvo pelo ChatGPT ;D
    int numCidades = 200;
    char codigoCidade[50];
    char estado[3];
    int numVeiculos, numAcidentes;
    char cidadeMaiorIndice[50], cidadeMenorIndice[50];
    float maiorIndice = -1.0, menorIndice = 100000.0;
    float somaVeiculos = 0.0;
    int numCidadesRS = 0;
    float somaAcidentesRS = 0.0;

    for(int i = 0; i < numCidades; i++){
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigoCidade);

        printf("Digite o estado (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);

        printf("Digite o numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &numAcidentes);

        float indiceAcidentes = (float)numAcidentes / numVeiculos;

        if(indiceAcidentes > maiorIndice){
            maiorIndice = indiceAcidentes;
            strcpy(cidadeMaiorIndice, codigoCidade);
        }

        if(indiceAcidentes < menorIndice){
            menorIndice = indiceAcidentes;
            strcpy(cidadeMenorIndice, codigoCidade);
        }

        somaVeiculos += numVeiculos;

        if(strcmp(estado, "RS") == 0){
            numCidadesRS++;
            somaAcidentesRS += numAcidentes;
        }
    }

    float mediaVeiculos = somaVeiculos / numCidades;
    float mediaAcidentesRS = somaAcidentesRS / numCidadesRS;

    printf("\nMaior indice de acidentes de transito: %.2f (Cidade: %s)\n", maiorIndice, cidadeMaiorIndice);
    printf("Menor indice de acidentes de transito: %.2f (Cidade: %s)\n", menorIndice, cidadeMenorIndice);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

    return 0;
}
