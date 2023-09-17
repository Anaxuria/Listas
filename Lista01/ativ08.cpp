#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    
    int n10, num, tab;

    printf("Digite o numero para a tabuada: ");
    scanf("%i", &num);

    for(n10=1;n10<11;n10++){
        tab=num*n10;
        printf("\n%i x %i = %i", num, n10, tab);
    }
}