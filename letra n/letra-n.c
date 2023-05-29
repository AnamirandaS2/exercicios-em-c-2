/* Efetuar a leitura de três valores inteiros desconhecidos
representados pelas variáveis A, B e C. Somar os valores
fornecidos e apresentar o resultado somente se for maior ou
igual a 100. */

#include<stdio.h>

int main(){
    int a,b,c, resultado;

    printf("Insira um valor inteiro A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro B: ");
    scanf("%d", &b);
    printf("Insira um valor inteiro C: ");
    scanf("%d", &c);

    resultado = a + b + c;

    if (resultado>= 100)
    {
        printf("O resultado da soma é %d", resultado);
    }
    return 0;

}