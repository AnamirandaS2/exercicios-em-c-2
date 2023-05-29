/* Efetuar a leitura de um valor numérico inteiro positivo ou
negativo representado pela variável N e apresentar o valor
lido como sendo positivo. Dica: se o valor lido for menor que
zero, ele deve ser multiplicado por –1. */

#include<stdio.h>

int main(){
    int n;

    printf("Digite um valor número inteiro N: ");
    scanf("%d", &n);
    if (n>=0)
    {
        printf("Esse número positivo é %d", n);
    }
    if (n<0)
    {
        int modulo = n * -1;
         printf("Esse número positivo é %d", modulo);
    }
    return 0;
}