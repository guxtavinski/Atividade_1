#include <stdio.h>
#include <math.h>

int main(){

    /*
    Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 
    */

   int A = -10, B = 15, C = 200, D = -25;

   if(A > B && A > C && A > D){
        printf("A e o maior numero.\n");
        if(B < C && B < D){
        printf("B e o menor.");
        }else if(C < D){
        printf("C e o menor.");
        }else{
        printf("D e o menor.");
        }

   }else if(B > A && B > C && B > D){
        printf("B e o maior numero.\n");
        if(A < C && A < D){
            printf("A e o menor numero.");
        }else if(C < D){
            printf("C e o menor numero.");
        }else{
            printf("D e o menor numero.");
        }

   }else if(C > A && C > B && C > D){
        printf("C e o maior numero.\n");
        if(A < B && A < D){
            printf("A e o menor numero.");
        }else if(B < D){
            printf("B e o menor numero.");
        }else{
            printf("D e o menor numero.");
        }
   }else{
        printf("D e o maior numero.\n");
        if(A < B && A < C){
            printf("A e o menor numero.");
        }else if(B < C){
            printf("B e o menor numero.");
        }else{
            printf("C e o menor numero.");
        }
   }
}