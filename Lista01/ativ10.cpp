#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int n10=0;
    float salario, maior=0, menor=999999999, mais_3k=0;

    do{
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if(salario>maior){
            maior = salario;
        }

        if(salario<menor){
            menor = salario;
        }

        if(salario>3000){
            mais_3k++;
        }

        n10++;
    }while(n10<10);

    printf("\nO maior salario eh: %.1f", maior);
    printf("\nO menor salario eh: %.1f", menor);
    printf("\nA quantidade de salarios acima de 3k eh: %.0f", mais_3k);
}