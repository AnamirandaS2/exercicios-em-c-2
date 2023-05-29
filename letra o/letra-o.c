/* Ler um número inteiro qualquer e multiplicá-lo por dois.
Apresentar o resultado da multiplicação somente se o
resultado for maior que 30. */

#include<stdio.h>

int main(){
    int valor, resultado;

    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);
    resultado = valor * 2;

    if (resultado>30)
    {
        printf("Esse número vezes 2 é igual a %d", resultado);
    }
    return 0;
}