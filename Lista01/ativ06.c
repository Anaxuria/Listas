#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int i, num, k, fat;

    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if( num > 0 ){
            fat=1;
            for(k=1;k<=num;k++){
                fat=fat*k;
            }
        }else{
            fat=0;
        }
        printf("O fatorial de %i eh %i \n \n",num, fat);
    }
    return 0;
}