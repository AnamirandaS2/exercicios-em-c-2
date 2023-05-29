/* Ler os valores de quatro notas escolares bimestrais de um
aluno representadas pelas variáveis N1, N2, N3 e N4.
Calcular a média aritmética (variável MD1) desse aluno e
apresentar a mensagem “Aprovado” se a média obtida for
maior ou igual a 7; caso contrário, o programa deve solicitar
a quinta nota (nota de exame, representada pela variável
NE) do aluno e calcular uma nova média aritmética (variável
MD2) entre a nota de exame e a primeira média aritmética.
Se o valor da nova média for maior ou igual a cinco,
apresentar a mensagem “Aprovado em exame”; caso
contrário, apresentar a mensagem “Reprovado”. Informar
também, após a apresentação das mensagens, o valor da
média obtida pelo aluno. */

#include<stdio.h>

int main(){

    float n1;
    float n2;
    float n3;
    float n4;
    float md1;

    printf("Insira a primeira nota N1: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota N2: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota N3: ");
    scanf("%f", &n3);
    printf("Insira a quarta nota N4: ");
    scanf("%f", &n4);

    md1 = (n1 + n2 + n3 + n4)/ 4;

    if (md1>=7)
    {
        printf("Aprovado \n");
    }
    else
    {
        float ne;

        printf("Insira a quinta nota: ");
        scanf("%f", &ne);

        float md2 = (ne + md1)/2;

        if (md2>=5)
        {
            printf("Aprovado em exame \n");
        }
        else
        {
            printf("Reprovado \n");
        }
        
    }
    printf("A média obtida pelo aluno foi %.2f \n", md1);

    return 0;
}