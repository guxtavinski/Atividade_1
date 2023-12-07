#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char numChassi[20];
    int ano;
    char placa[8];
    struct Veiculo *prox;
} Veiculo;

int somaValoresNumericos(char placa[8]);

void listarDiesel2010OuPosterior(Veiculo *lista){
    Veiculo *auxiliar = lista;
    while(auxiliar != NULL){
        if(auxiliar->ano >= 2010 && strcmp(auxiliar->combustivel, "diesel") == 0){
            printf("Proprietario: %s\n", auxiliar->proprietario);
        }
        auxiliar = auxiliar->prox;
    }
}

void listarPlacasJ(Veiculo *lista){
    Veiculo *auxiliar = lista;
    while(auxiliar != NULL){
        if(auxiliar->placa[0] == 'J' && (auxiliar->placa[6] == '0' || auxiliar->placa[6] == '2' || auxiliar->placa[6] == '4' || auxiliar->placa[6] == '7')){
            printf("Placa: %s - Proprietario: %s\n", auxiliar->placa, auxiliar->proprietario);
        }
        auxiliar = auxiliar->prox;
    }
}

int somaValoresNumericos(char placa[8]){
    int soma = 0;
    for(int i = 3; i < 7; i++){
        soma += placa[i] - '0';
    }
    return soma;
}

void listarModeloCorPlacasVogalESomaPar(Veiculo *lista){
    Veiculo *auxiliar = lista;
    while(auxiliar != NULL){
        char segundaLetraPlaca = auxiliar->placa[1];
        int soma = somaValoresNumericos(auxiliar->placa);
        if((segundaLetraPlaca == 'A' || segundaLetraPlaca == 'E' || segundaLetraPlaca == 'I' || segundaLetraPlaca == 'O' || segundaLetraPlaca == 'U') && (soma % 2 == 0)){
            printf("Modelo: %s - Cor: %s\n", auxiliar->modelo, auxiliar->cor);
        }
        auxiliar = auxiliar->prox;
    }
}

void trocarProprietarioSemDigitoZero(Veiculo *lista, char numChassi[], char novoProprietario[]){
    Veiculo *auxiliar = lista;
    while(auxiliar != NULL){
        int temZero = 0;
        for(int i = 0; i < 7; i++){
            if (auxiliar->placa[i] == '0'){
                temZero = 1;
                break;
            }
        }
        if(!temZero && strcmp(auxiliar->numChassi, numChassi) == 0){
            strcpy(auxiliar->proprietario, novoProprietario);
            printf("Proprietario alterado com sucesso!\n");
            return;
        }
        auxiliar = auxiliar->prox;
    }
    printf("Carro nao encontrado ou nao atende aos criterios para troca de proprietario.\n");
}

Veiculo* criarVeiculo(){
    Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    printf("Digite o nome do proprietario: ");
    scanf("%s", novoVeiculo->proprietario);
    printf("Digite o tipo de combustivel (alcool, diesel ou gasolina): ");
    scanf("%s", novoVeiculo->combustivel);
    printf("Digite o modelo do veiculo: ");
    scanf("%s", novoVeiculo->modelo);
    printf("Digite a cor do veiculo: ");
    scanf("%s", novoVeiculo->cor);
    printf("Digite o numero do chassi: ");
    scanf("%s", novoVeiculo->numChassi);
    printf("Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo->ano);
    printf("Digite a placa do veiculo (formato: ABC1234): ");
    scanf("%s", novoVeiculo->placa);
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

void adicionarVeiculo(Veiculo **lista, Veiculo *novoVeiculo){
    if(*lista == NULL) {
        *lista = novoVeiculo;
    }else{
        Veiculo *temp = *lista;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = novoVeiculo;
    }
}

void liberarLista(Veiculo *lista){
    Veiculo *temp;
    while(lista != NULL){
        temp = lista;
        lista = lista->prox;
        free(temp);
    }
}

void exibirMenu(){
    printf("\n\n==== Menu de Opcoes ====\n");
    printf("1. Listar proprietarios de carros do ano 2010 ou posterior movidos a diesel.\n");
    printf("2. Listar placas que comecam com J e terminam com 0, 2, 4 ou 7.\n");
    printf("3. Listar modelo e cor de veiculos com segunda letra da placa vogal e soma dos valores numericos par.\n");
    printf("4. Alterar proprietario do veiculo com determinado numero de chassi.\n");
    printf("5. Sair.\n");
    printf("Escolha uma opcao (1-5): ");
}

int main(){
    Veiculo *lista = NULL;
    char continuar;

    do{
        Veiculo *novoVeiculo = criarVeiculo();
        adicionarVeiculo(&lista, novoVeiculo);

        printf("Deseja adicionar outro veiculo? (S/N): ");
        scanf(" %c", &continuar);
    }while(continuar == 'S' || continuar == 's');

    int opcao;
    do{
        exibirMenu();
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                printf("\nProprietarios de carros do ano 2010 ou posterior movidos a diesel:\n");
                listarDiesel2010OuPosterior(lista);
                break;
            case 2:
                printf("\nPlacas que comecam com J e terminam com 0, 2, 4 ou 7 junto aos respectivos proprietarios:\n");
                listarPlacasJ(lista);
                break;
            case 3:
                printf("\nModelo e cor de veiculos com segunda letra da placa vogal e soma dos valores numericos par:\n");
                listarModeloCorPlacasVogalESomaPar(lista);
                break;
            case 4: {
                char numChassi[20], novoProprietario[50];
                printf("\nDigite o numero do chassi do veiculo que deseja alterar o proprietario: ");
                scanf("%s", numChassi);
                printf("Digite o novo nome do proprietario: ");
                scanf("%s", novoProprietario);
                trocarProprietarioSemDigitoZero(lista, numChassi, novoProprietario);
                break;
            }
            case 5:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida. Escolha uma opcao valida (1-5).\n");
                break;
        }
    }while(opcao != 5);

    liberarLista(lista);

    return 0;
}