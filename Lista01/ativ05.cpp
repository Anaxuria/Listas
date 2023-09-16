#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int n10=0, num, div=0, prim=0, k, som_impar=0;
    float med=0, par=0, tot_par=0;

    do{
        printf("Digite um numero: ");
        scanf("%i", &num);

        div=0;

        for(k=1;k<=num;k++){
			if(num % k == 0){
				div++;
			}
		}

		if(div == 2){
			prim++;
		}

        if(num % 2 == 0){
            tot_par+=num;
            par++;
        }else{
            som_impar+= num;
        }

        n10++;
    }while (n10<10);


    printf("\nA quantidade de numeros primos eh: %i", prim);
    printf("\nA soma dos numeros impares eh: %i", som_impar);
    if(tot_par > 0){
			med=tot_par/par;
			printf("\nA media dos numeros pares eh: %.1f", med);
		} else {
			printf("\nNão tivemos numeros pares.");
		}
    
}