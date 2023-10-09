#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    char matricula[15];
    char endereco[150];
    char curso[30];
    char periodo[15];
    int semestre;

    printf("=== Cadastro para Atividades Complementares ===\n");

    printf("Nome: ");
    fgets(nome, 100, stdin);

    printf("Idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Matricula: ");
    fgets(matricula, 15, stdin);

    printf("Endereco: ");
    fgets(endereco, 150, stdin);

    printf("Curso: ");
    fgets(curso, 30, stdin);

    printf("Periodo: ");
    fgets(periodo, 15, stdin);

    printf("Semestre: ");
    scanf("%d", &semestre);

    printf("\n=== Reveja seus dados ===\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %s", matricula);
    printf("Endereco: %s", endereco);
    printf("Curso: %s", curso);
    printf("Periodo: %s", periodo);
    printf("Semestre: %d\n", semestre);

    return 0;
}
