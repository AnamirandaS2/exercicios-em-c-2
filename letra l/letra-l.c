/* Fazer a leitura de um valor numérico inteiro qualquer e
apresentá-lo caso não seja maior que 3. Dica: para a
solução deste problem, utilize apenas o operador lógico de
negação. */

#include<stdio.h>

int main(){
    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);
    if (!(a>3))
    {
        printf("%d",a);
    }
    
}