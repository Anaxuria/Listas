#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    //1. Escreva um programa que leia uma matriz de ordem 3 x 5 de elementos inteiros, calcule e mostre na tela:
    //  a) menor número da matriz;
    //  b) soma dos números múltiplos de 3 da matriz;
    //  c) maior número da 3ª coluna da matriz (índice 2);
    //  d) média dos números da matriz;
    
    const int LIN=3, COL=5;
    int mat[LIN][COL], menor=999999, soma3=0, maior=0, i, j;
    float total=0, media;

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite o numero: ");
            scanf("%i", &mat[i][j]);

            if(mat[i][j] < menor){
                menor = mat[i][j];
            }

            if(mat[i][j] % 3 == 0){
                soma3 += mat[i][j];
            }

            if(j == 2 && mat[i][j] > maior){
                maior = mat[i][j];
            }

            total += mat[i][j];
        }
    }

    media = total / (LIN * COL);

    printf("\nO menor numero da matriz eh: %i", menor);
    printf("\nA soma dos numeros multiplos por e eh: %i", soma3);
    printf("\nO maior numero da 3a coluna eh: %i", maior);
    printf("\nA media dos numeros da matriz eh: %.2f", media);

}