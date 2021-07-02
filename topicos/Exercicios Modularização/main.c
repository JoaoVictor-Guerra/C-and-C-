#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float encontraResposta(int num);
float achaResposta(int num);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int resposta;

    printf("\nBem vindo ao trabalho de modulariza��o!\n");
    printf("Para sair, digite um n�mero menor do que 0\n");
    printf("\n");
    printf("Informa��o importante: Os valores dados como resposta s�o mais exatos/precisos (em 0,1, por exemplo) do que se forem feitos os c�lculos com apenas duas casas decimais como � apresentado. Tal op��o foi feita apenas para melhor a visualiza��o.");
    printf("\n");


    do
    {
        printf("\nQual exerc�cio, de 1 a 6, voc� gostaria de ver? ");
        scanf("%i",&resposta);
        system("cls");


        switch(resposta)
        {
        case 1:
            ex01();
            printf("\n");
            system("pause");
            break;
        case 2:
            ex02();
            printf("\n");
            system("pause");
            break;
        case 3:
            ex03();
            printf("\n");
            system("pause");
            break;
        case 4:
            ex04();
            printf("\n");
            system("pause");
            break;
        case 5:
            ex05();
            printf("\n");
            system("pause");
            break;
        case 6:
            ex06();
            printf("\n");
            system("pause");
            break;
        }
    }
    while(resposta > 0);

    printf("\nFim\n");
}

//Fa�a esse programa das seguintes formas:

// 1 - Em um programa principal
int ex01()
{
    setlocale(LC_ALL, "Portuguese");

    int N,a=1,b=0,c=0,deno = 2,cont;
    float div, soma = 0;
    printf("Digite o n�mero de termos que deseja calcular: ");
    scanf("%d", &N);
    printf("\n");
    for(cont=0; cont<N; cont++, deno+=2 )
    {
        c=a+b;
        a=b;
        b=c;


        div = (float)c/deno;

        if(cont % 2 == 0)
        {
            if(cont >= 2)
                div*=-1;

        }
        else
        {
            div*=1;

        }

        soma+=div;


        printf("%i/%i = %.2f\n",c,deno, div,cont);


    }
    printf("\n");
    printf("O resultado do c�lculo da sequ�ncia at� %d � igual a %.2f.",N,soma);

    /*int num, a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        aux2+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f",aux2);
    printf("\n");
*/
}
// ----


// 2 - Utilizando apenas um procedimento

int ex02()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    encontraFibDobro(num);

    return 0;
}

void encontraFibDobro(int num){

    int a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;


    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        aux2+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f",aux2);
    printf("\n");

}

// --


// 3 - Utilizando vari�veis globais

float total = 0;

int ex03(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    encontraDiv(num);

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f",total);
    printf("\n");

    return 0;
}

void encontraDiv(int num){

    int a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao;

    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        total+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

}

// --

// 4 - Utilizando fun��o e vari�veis globais


float resp;

int ex04()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    achaResposta(num);

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f",resp);
    printf("\n");

    return 0;
}

float achaResposta(int num){

    int a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;

    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        aux2+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

    resp = aux2;

    return 0;

}


// --


// 5 - Utilizando fun��o passando N como par�metro e retornando valor

int ex05()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float resposta;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    resposta = encontraResposta(num);

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f",resposta);
    printf("\n");

    return 0;
}

float encontraResposta(int num){

    int a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;


    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        aux2+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

    return aux2;

}

// --




// 6 - Utilizando procedimento passando N como par�metro e retornando o valor em um outro par�metro

int ex06()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float valorTotal = 0;

    printf("Digite o valor de N para o resultado da s�rie: ");
    scanf("%i",&num);

    respFib(num, &valorTotal);

    printf("\n");
    printf("A soma da sequ�ncia at� o valor N � igual a %.2f", valorTotal);
    printf("\n");

    return 0;
}

void respFib(int num, float *valorTotal){

    int a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;


    for(int i = 0; i < num; i++, seq +=2)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        divisao = (float)auxiliar/seq;

        if(i % 2 == 0)
        {
            if(i >= 2)
                divisao*=-1;

        }
        else
        {
            divisao*=1;

        }

        aux2+=divisao;


        printf("%i/%i = %.2f\n",auxiliar,seq, divisao,i);

    }

    *valorTotal = aux2;
}

//--
