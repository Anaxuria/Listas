#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int i, menorIdade=999999, idade20e30=0, maiorMedia=0;
    float idade[10], total, media;

    for(i=0; i<10;i++){
        printf("Digite a idade: ");
        scanf("%f", &idade[i]);

        if(idade[i]<menorIdade){
            menorIdade=idade[i];
        }

        total += idade[i];

        if(idade[i] >= 20 && idade[i] <= 30){
            idade20e30++;
        }
    }

    media = total/10;

    for(i=0; i<10;i++){
        if(idade[i]>media){
            maiorMedia++;
        }
    }

    printf("\nA menor idade eh: %i", menorIdade);
    printf("\nA media das idades eh %.2f", media);
    printf("\nA quantidade de idades entre 20 e 30 anos eh: %i", idade20e30);
    if(maiorMedia>0){
        printf("\nA quantidade de idades maior que a media eh: %i", maiorMedia);
    }else{
        printf("\nNão temos idades maiores que a media.");
    }
}