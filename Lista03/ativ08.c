#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    const int LIN = 2, COL = 6;
    int matriz[LIN][COL], maior, somaMultiplos3 = 0;
    float mediaSegundaLinha = 0, mediaMatriz = 0;
    int novaMatriz[LIN][COL];

    printf("Digite os elementos da matriz 2x6:\n");
    scanf("%d", &maior);

    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }

            if (matriz[i][j] % 3 == 0) {
                somaMultiplos3 += matriz[i][j];
            }

            if (i == 1) {
                mediaSegundaLinha += matriz[i][j];
            }

            mediaMatriz += matriz[i][j];

            novaMatriz[i][j] = matriz[i][j] * mediaMatriz;
        }
    }

    mediaSegundaLinha /= COL;
    mediaMatriz /= (LIN * COL);

    printf("Maior número da matriz: %d\n", maior);
    printf("Soma dos números múltiplos de 3: %d\n", somaMultiplos3);
    printf("Média dos números da segunda linha: %.2f\n", mediaSegundaLinha);
    printf("Média dos números da matriz: %.2f\n", mediaMatriz);

    printf("Nova matriz resultante da multiplicação:\n");
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", novaMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}