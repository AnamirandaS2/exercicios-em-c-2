/* Ler três valores inteiros representados pelas variáveis A, B e
C e apresentar os valores lidos dispostos em ordem
crescente. */

#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a,b,c;

    printf("Insira um valor inteiro A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro B: ");
    scanf("%d", &b);
    printf("Insira um valor inteiro C: ");
    scanf("%d", &c);

    if (a<b)
    {
        swap(&a,&b);
    }
    if (b<c)
    {
        swap(&b,&c);
    }
    if (c<a)
    {
        swap(&c,&a);
    }

    printf("Os valores em ordem crescente: %d, %d, %d", a,b,c);

    return 0;

}