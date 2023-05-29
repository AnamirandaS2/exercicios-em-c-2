/* Realizar a leitura dos valores de quatro notas escolares
bimestrais de um aluno representadas pelas variáveis N1,
N2, N3 e N4. Calcular a média aritmética (variável MD)
desse aluno e apresentar a mensagem “Aprovado” se a
média obtida for maior ou igual a 5; caso contrário,
apresentar a mensagem “Reprovado”. Informar também,
após a apresentação das mensagens, o valor da média
obtida pelo aluno. */

#include<stdio.h>

int main(){

    float n1;
    float n2;
    float n3;
    float n4;
    float md;

    printf("Insira a primeira nota N1: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota N2: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota N3: ");
    scanf("%f", &n3);
    printf("Insira a quarta nota N4: ");
    scanf("%f", &n4);

    md = (n1 + n2 + n3 + n4)/ 4;

    if (md>=5)
    {
        printf("Aprovado \n");
    }
    else
    {
        printf("Reprovado \n");
    }
    
    printf("A média do aluno foi %.2f \n", md);
    
    return 0;
}