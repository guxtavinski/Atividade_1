#include <stdio.h>

int main(){
    float alturaChico = 1.50f;
    float alturaZe = 1.10f;
    int anos = 0;


    while(alturaZe <= alturaChico){
        alturaChico += 0.02f;
        alturaZe += 0.03f;
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);
}
