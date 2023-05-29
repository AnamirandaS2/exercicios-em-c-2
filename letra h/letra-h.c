/* Efetuar a leitura de quatro valores numéricos inteiros
representados pelas variáveis A, B, C e D. Apresentar
apenas os valores que sejam divisíveis por 2 ou 3. */

#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("Insira um valor inteiro A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro B: ");
    scanf("%d", &b);
    printf("Insira um valor inteiro C: ");
    scanf("%d", &c);
    printf("Insira um valor inteiro D: ");
    scanf("%d", &d);

    printf("Valores divisiveis por 2 ou 3: ");

    if ( a%2 == 0 || a%3 == 0)
    {
        printf("%d ", a);
    }
    if ( b&2 == 0 || b%3 == 0)
    {
        printf("%d ",b);
    }
    if ( c%2 == 0 || c%3 == 0)
    {
        printf("%d ",c);
    }
    if (d%2 == 0 || d%3 == 0)
    {
        printf("%d ", d);
    }
    
    return 0;

}
