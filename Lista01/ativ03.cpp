#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int num10=1, num, k, div=0, soma=0;
	float total=0, quant_med=0, media=0;

	printf("Digite o numero: ");
	scanf("%i", &num);

	do {

		div=0;

        for(k=1;k<=num;k++){
			if(num % k == 0){
				div++;
			}
		}

		if(div == 2){
			soma+= num;
		}

		if(num % 3 == 0 && num > 10){
			total+=num;
			quant_med++;
		}

        printf("Digite o numero: ");
	    scanf("%i", &num);

		num10++;
	} while(num10 < 10);

	media = total/quant_med;

    printf("\nSoma dos numeros primos: %i", soma);
	printf("\nQuantidade de numeros multiplos de 3 e maior que 10: %.1f", media);
}