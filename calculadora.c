#include <stdio.h>
#include "function_multiplicar.c"
#include "function_dividir.c"
    int main(){
    int input = 0;
    int numero1;
    int numero2;

    printf("Calculadora\n\n");

    printf("1 - soma\n");

    printf("2 - subtra�a�\n");

    printf("3 - divis�o\n");

    printf("4 - multiplica��o\n");

    scanf("%d", &input);

if(input == 1){
        printf("\nDigite o priemiro numero: ");
        scanf("%d", &numero1);
        printf("\nDigite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Resultado � :%d", numero1+numero2);
    }

if(input == 2){
        printf("\nDigite o priemiro numero: ");
        scanf("%d", &numero1);
        printf("\nDigite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Resultado � :%d", numero1-numero2);
    }

    if(input == 3){
        printf("\nDigite o priemiro numero: ");
        scanf("%d", &numero1);
        printf("\nDigite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Resultado � :%d", dividir(numero1, numero2));
    }
    if(input == 4){
        printf("\nDigite o priemiro numero: ");
        scanf("%d", &numero1);
        printf("\nDigite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Resultado � :%d", multiplicar(numero1, numero2));
    }

}
