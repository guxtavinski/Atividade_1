#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
}Produto;

typedef struct Produtos{
    Produto produto;
    struct Produtos* proximo;
}Produtos;

Produtos* lista = NULL;

void inicializarLista(){
    lista = NULL;
}

void adicionarProduto(){
    Produtos* novoProduto = (Produtos*)malloc(sizeof(Produtos));
    printf("Digite o codigo do produto: ");
    scanf("%d", &novoProduto->produto.codigo);
    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]s", novoProduto->produto.descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto->produto.quantidade);
    printf("Digite o valor do produto: ");
    scanf("%f", &novoProduto->produto.valor);
    novoProduto->proximo = lista;
    lista = novoProduto;
}

void imprimirRelatorio(){
    Produtos* auxiliar = lista;
    printf("\nRelatorio de produtos:\n");
    printf("Codigo | Descricao | Quantidade | Valor\n");
    while(auxiliar != NULL){
        printf("%d | %s | %d | R$ %.2f\n", auxiliar->produto.codigo, auxiliar->produto.descricao, auxiliar->produto.quantidade, auxiliar->produto.valor);
        auxiliar = auxiliar->proximo;
    }
}

void pesquisarProduto(){
    int codigo;
    printf("Digite o codigo do produto a pesquisar: ");
    scanf("%d", &codigo);
    Produtos* auxiliar = lista;
    while(auxiliar != NULL){
        if(auxiliar->produto.codigo == codigo){
            printf("Produto encontrado:\nCodigo: %d\nDescricao: %s\nQuantidade: %d\nValor: R$ %.2f\n", auxiliar->produto.codigo, auxiliar->produto.descricao, auxiliar->produto.quantidade, auxiliar->produto.valor);
            return;
        }
        auxiliar = auxiliar->proximo;
    }
    printf("Produto nao encontrado.\n");
}

void removerProduto(){
    int codigo;
    printf("Digite o codigo do produto a ser removido: ");
    scanf("%d", &codigo);
    Produtos* anterior = NULL;
    Produtos* atual = lista;
    while(atual != NULL){
        if (atual->produto.codigo == codigo){
            if(anterior == NULL){
                lista = atual->proximo;
            }else{
                anterior->proximo = atual->proximo;
            }
            free(atual);
            printf("Produto removido com sucesso.\n");
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    printf("Produto nao encontrado.\n");
}

int main(){
    int opcao;
    inicializarLista();

    do{
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Imprimir relatorio de produtos\n");
        printf("3. Pesquisar produto por codigo\n");
        printf("4. Remover produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                adicionarProduto();
                break;
            case 2:
                imprimirRelatorio();
                break;
            case 3:
                pesquisarProduto();
                break;
            case 4:
                removerProduto();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }while(opcao != 0);

    return 0;
}
