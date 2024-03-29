#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    const int LIN = 5, COL = 4;
    float mat[LIN][COL], total, media[5];
    int i, j, ind;
    char nomes[5][20];

    for (i = 0; i < LIN; i++) {
        total = 0;
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        for (j = 0; j < COL; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &mat[i][j]);
            total += mat[i][j];
        }

        media[i] = total / COL;
    }

    float maiorMedia = media[0];
    ind = 0;

    for (i = 1; i < LIN; i++) {
        if (media[i] > maiorMedia) {
            maiorMedia = media[i];
            ind = i;
        }
    }

    printf("\nMaior média: %.2f\n", maiorMedia);
    printf("Nome do aluno com maior média: %s\n\n", nomes[ind]);

    printf("Relatório:\n");
    for (i = 0; i < LIN; i++) {
        printf("Nome: %s | Média: %.2f\n", nomes[i], media[i]);
    }

    return 0;
}
