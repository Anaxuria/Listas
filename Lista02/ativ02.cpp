#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    //2)Faça um programa que preencha um vetorcom 10 cores diferentes. Depois permita fazer uma  pesquisa  se  uma determinada cor existe  armazenada no  vetor,  se  existir  deve  ser impresso  na  tela a  cor  e  em  qual  posição  (índice)  esta  cor  está armazenada.  A pesquisa deve ser feita até que seja digitado FIM na cor a ser pesquisadana lista.

    char colors[10][20];
    char searchColor[20];

    // Preenchendo o vetor com 10 cores diferentes
    printf("Digite 10 cores diferentes:\n");
    for (int i = 0; i < MAX_COLORS; ++i) {
        printf("Cor %d: ", i + 1);
        scanf("%s", colors[i]);
    }

    // Pesquisa por cor até que "FIM" seja digitado
    while (1) {
        printf("\nDigite a cor a ser pesquisada (ou FIM para sair): ");
        scanf("%s", searchColor);

        // Verificando se a pesquisa deve ser encerrada
        if (strcmp(searchColor, "FIM") == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Procurando a cor no vetor
        int found = 0;
        for (int i = 0; i < MAX_COLORS; ++i) {
            if (strcmp(colors[i], searchColor) == 0) {
                printf("Cor encontrada! A cor %s está na posição %d do vetor.\n", searchColor, i);
                found = 1;
                break;
            }
        }

        // Caso a cor não seja encontrada
        if (!found) {
            printf("A cor %s não foi encontrada no vetor.\n", searchColor);
        }
    }

    return 0;
}

}