 /* Efetuar a leitura de dois valores numéricos inteiros 
 representados pelas variáveis A e B e 
 apresentar o resultado da diferença do maior valor pelo menor valor. */

 #include<stdio.h>

 int main(){
    int a;
    int b;
    int diferençaAB;
    int diferençaBA;


    printf("Digite um valor númerico A: ");
    scanf("%d", &a);
    printf("Digite um valor númerico B: ");
    scanf("%d", &b);
    
    diferençaAB = a - b;
    diferençaBA = b - a;

    if (a>b)
    {
        printf("A diferença entre o maior pelo menor é %d \n", diferençaAB);
    }
    if (b>a)
    {
        printf("A diferença entre o maior pelo menor é %d \n", diferençaBA);
    }

    return 0;
 }

