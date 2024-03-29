#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    const int VEN=5, MES=3;
    int mat[VEN][MES], i, j, soma=0, val_vend[VEN], maior=0, menor=999999, total[MES];
    char vend[VEN][15];

    for(i=0; i<VEN; i++){

        soma=0;

        printf("Digite o nome do vendedor %i: ", i+1);
        scanf("%s", vend[i]);

        for(j=0; j<MES; j++){
            printf("Digite o valor do %i vendedor no mes %i: ", i+1, j+1);
            scanf("%i", &mat[i][j]);

            soma += mat[i][j];

            if(j == 0 && mat[i][j] > maior){
                maior = mat[i][j];
            }

            if(j == 2 && mat[i][j] < menor){
                menor = mat[i][j];
            }
        }

        val_vend[i] = soma;
        printf("\n");
    }

    for(j=0; j<MES; j++){

        soma = 0;
        for(i=0; i<VEN; i++){
            soma += mat[i][j];
        }

        total[j] = soma;
    }

    for(i=0; i<VEN; i++){
        printf("\nO valor total vendido por %s eh: %i", vend[i], val_vend[i]);
    }
    printf("\nA maior venda do mes 1 foi: %i", maior);
    printf("\nA menor venda do mes 3 foi: %i", menor);
    for(j=0; j<MES; j++){
        printf("\nO total vendido no mes %i todos os vendedores eh: %i", j+1, total[j]);
    }

}