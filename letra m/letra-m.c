/* Efetuar a leitura de um nome (variável NOME) e o sexo
(variável SEXO) de uma pessoa e apresentar como saída
uma das seguintes mensagens: “Ilmo. Sr.”, caso seja
informado o sexo masculino (utilizar como valor o caractere
“M”), ou “Ilma. Sra.”, caso seja informado o sexo feminino
(utilizar como valor o caractere “F”). Após a mensagem de
saudação, apresentar o nome informado. O programa deve,
após a entrada do sexo, verificar primeiramente se o sexo
fornecido é realmente válido, ou seja, se é igual a “M” ou a
“F”. Não sendo essa condição verdadeira, o programa deve
apresentar a mensagem “Sexo informado inválido”. */

#include<stdio.h>
int main(){
    char nome[50];
    char sexo;

    printf("Qual é o seu nome? ");
    scanf("%s", nome);
    printf("Qual é o seu sexo? Responda M para masculino ou F para feminino: ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo!= 'F')
    {
        printf("Sexo informado inválido \n");
    }
    else
    {
        if (sexo == 'M')
        {
            printf("Ilmo. Sr. %s \n", nome);
        }
        else
        {
        printf("Ilma. Sra. %s \n", nome);
        }
    }
    return 0;
}