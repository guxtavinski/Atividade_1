#include <stdio.h>

int main(){
    float altura;

    printf("Insira a altura: \n");
    scanf("%f", &altura);

    if(altura > 1.8){
        printf("Parabens, voce e gigante.");
    }else{
        printf("Voce e anao, tente novamente na proxima vida");
    }

}