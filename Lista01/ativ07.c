#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int idade;
    float tot=0, med, quant=0;

    printf("Digite a idade: ");
	scanf("%i", &idade);

	if(idade < 0){
		printf("Esta idade nao eh valida. \nPor favor, apenas valores positivos.");
	} else {
		while(idade>0){
			tot += idade;
            quant++;
			

			printf("\nDigite sua idade: (Digite '0' para parar o programa) ");
			scanf("%i", &idade);
		}
    }
	if(quant > 0){
		med=tot/quant;
		printf("\nA media das idades eh: %.1f", med);
	} else {
		printf("\nNao tivemos numeros para a media");
	}
}