/* Ler um valor numérico inteiro e apresentar uma mensagem
informando se o valor fornecido é par ou ímpar. */
#include<stdio.h>

int main(){
    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);

    if (a%2 == 0)
    {
        printf("Esse número é par");
    }
    else
    {
        printf("Esse número é ímpar");
    }
    return 0;
}