#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    const int LIN=4, COL=6;
    int mat[LIN][COL], i, j, qtd=0, soma10=0, soma4a=0, qtdm=0;
    float total, media; 

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite o numero: ");
            scanf("%i", &mat[i][j]);

            if(mat[i][j] > 10 && mat[i][j] < 30){
                qtd++;
            }

            if(mat[i][j] > 10 && mat[i][j] % 2 == 0){
                soma10 += mat[i][j];
            }

            if(j == 3){
                soma4a += mat[i][j];
            }

            if(i == 2){
                total += mat[i][j];
                qtdm++;
            }
        }
    }

    media = total/qtdm;

    printf("\nA quantidade de numeros que estao no intervalo de 10 e 30 eh: %i", qtd);
    printf("\nA soma dos numeros maiores que 10 e pares eh: %i", soma10);
    printf("\nA soma dos numeros da 4a coluna eh: %i", soma4a);
    printf("\nA media dos numeros da 3 linha eh: %.2f", media);

}