/* Efetuar a leitura de três valores numéricos (representados
pelas variáveis A, B e C) e processar o cálculo da equação
completa de segundo grau, utilizando a fórmula de Bhaskara

(considerar para a solução do problema todas as possíveis
condições para delta: delta < 0 – não há solução real, delta
> 0 – há duas soluções reais e diferentes e delta = 0 – há
apenas uma solução real). Lembre-se de que é completa a
equação de segundo grau que possui todos os coeficientes
A, B e C diferentes de zero. O programa deve apresentar
respostas para todas as condições estabelecidas para delta. */

#include<stdio.h>

int main(){

    float a,b,c, delta;

    printf("Insira um valor A: ");
    scanf("%f", &a);
    printf("Insira um valor B: ");
    scanf("%f", &b);
    printf("Insira um valor C: ");
    scanf("%f", &c);

    delta = (b) * (b) - (4 * a * c);

    if (delta < 0)
    {
        printf("Não há solução real para este delta \n");
    }
    if (delta > 0)
    {
        printf("Há duas soluções reais e diferentes para este delta \n");
    }
    if (delta == 0)
    {
        printf("Há apenas uma solução real para este delta \n");
    }

    return 0;
    
}
