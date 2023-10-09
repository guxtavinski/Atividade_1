#include <stdio.h>

int main(){
    int numAlunos = 30;
    float medias[numAlunos];
    float mediaGeral = 0.0;

    for(int i = 0; i < numAlunos; i++){
        float n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &n1, &n2, &n3);

        //Alterei o peso da n1 para fechar os 10 pontos
        medias[i] = (n1 * 3 + n2 * 4 + n3 * 3) / 10;

        mediaGeral += medias[i];
    }

    mediaGeral /= numAlunos;

    printf("\nMedias dos alunos e status:\n");
    for(int i = 0; i < numAlunos; i++){
        printf("Aluno %d: %.2f - ", i + 1, medias[i]);
        if(medias[i] >= 7.0){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
    }

    printf("\nMedia geral da turma: %.2f\n", mediaGeral);
}
