#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int n10=0;
    float idade, peso, tot_idade=0, med_idade, tot_30=0, med_30, plus_30=0, plus_70=0, maior=0;

    do{
        printf("\nDigite a idade: ");
        scanf("%f", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        tot_idade+=idade;

        if(idade>maior){
            maior=idade;
        }

        if(idade>=30&&idade<=40){
            tot_30+=idade;
            plus_30++;
        }

        if(peso>70){
            plus_70++;
        }

        n10++;
    }while (n10<10);
    
    med_idade=tot_idade/10;
    printf("\nA media das idades eh: %.1f", med_idade);
    printf("\nA maior idade eh: %.1f", maior);

    if(tot_idade>0){
        med_30=tot_30/plus_30;
        printf("\nA media das idades entre 30 e 40 eh: %.1f", med_30);
    } else {
        printf("\nNao tem idades entre 30 e 40 para fazer a media");
    }

    printf("\nQuantidade de pessoas com mais de 70 kilos eh: %.1f", plus_70);
}
