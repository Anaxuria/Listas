#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int num10=1, num, men_num=9999, soma_num=0, imp_num=1, total_num20=0, med_num, num_20=0;

	printf("Digite o numero: ");
	scanf("%i", &num);

	do {

		if (num < men_num){
			men_num =  num;
		}

		if(num % 2 == 0 && num > 10){
			soma_num += num;
		}

		if(num % 2 != 0){
			imp_num++;
		}

		if(num > 20){
			total_num20 += num;
			num_20++;
		}

		printf("Digite o numero: ");
		scanf("%i", &num);

		num10++;
	} while(num10 < 10);

	if(num_20 > 1){
		med_num = total_num20/num_20;
	}

	printf("\nO menos numero apresnetado eh: %i", men_num);
	printf("\nA soma dos numeros pares maiores que 10 eh: %i", soma_num);
	printf("\nA quantidade de numeros impares eh: %i", imp_num);
	if (num_20 > 1){
		printf("\nA media dos numeros maiores de 20 eh: %i", med_num);
	}else{
		printf("\nNão tivemos numeros maiores que 20.");
	}
}
