#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int idade, op, reg=0, bom=0;
	float med=0, tot_id=0, oti=0;

	printf("Digite sua idade: ");
	scanf("%i", &idade);

	if(idade < 0){
		printf("Esta idade nao eh valida. \nPor favor, apenas valores positivos.");
	} else {
		while(idade>0){

			printf("Digite sua opniao sobre o filme: (3-otimo; 2-bom; 1-regular) ");
			scanf("%i", &op);

			switch(op){
				case 3:
					tot_id+=idade;
					oti++;
					break;
				case 2:
					bom++;
					break;
				case 1:
					reg++;
					break;
				default:
					printf("Nota nao valida, tente novamente. \n");
			}

			printf("\nDigite sua idade: (Digite '0' para parar o programa) ");
			scanf("%i", &idade);
		}
		
		if(oti > 0){
			med=tot_id/oti;
			printf("\nA media das idades dos que votaram em 'otimo' eh: %.1f", med);
		} else {
			printf("\nNao tivemos notas 'otimo' para fazer a media.");
		}
		printf("\nA quantidade de pessoas que votou em 'bom' eh: %i", bom);
		printf("\nA quantidade de pessoas que votou em 'regular' eh: %i", reg);
	}
}