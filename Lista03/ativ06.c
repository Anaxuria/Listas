#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    const int HAB = 10, DADO = 3;
    float mat[HAB][DADO], mediaSalario, mediaFilhos, totalSalario = 0, totalFilhos = 0, totalFilhos15a25 = 0, totalSalario20a30 = 0;
    int i, qtdFilhos15a25 = 0, qtdPessoas20a30 = 0;

    for (i = 0; i < HAB; i++) {
        printf("Habitante %d:\n", i + 1);
        printf("Digite o salário: ");
        scanf("%f", &mat[i][0]);
        totalSalario += mat[i][0];

        printf("Digite a idade: ");
        scanf("%f", &mat[i][1]);

        printf("Digite o número de filhos: ");
        scanf("%f", &mat[i][2]);
        totalFilhos += mat[i][2];

        if (mat[i][1] >= 15 && mat[i][1] <= 25) {
            totalFilhos15a25 += mat[i][2];
            qtdFilhos15a25++;
        }

        if (mat[i][1] >= 20 && mat[i][1] <= 30) {
            totalSalario20a30 += mat[i][0];
            qtdPessoas20a30++;
        }

        printf("\n");
    }

    mediaSalario = totalSalario / HAB;
    mediaFilhos = totalFilhos / HAB;

    printf("\nA média do salário da população é: %.2f\n", mediaSalario);
    printf("A média do número de filhos é: %.2f\n", mediaFilhos);
    printf("A quantidade de filhos das pessoas entre 15 a 25 anos é: %.2f\n", totalFilhos15a25);
    printf("A média dos salários das pessoas entre 20 a 30 anos é: %.2f\n", qtdPessoas20a30 > 0 ? totalSalario20a30 / qtdPessoas20a30 : 0);

    return 0;
}
