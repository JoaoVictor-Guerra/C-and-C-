#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float encontraResposta(int num);
float achaResposta(int num);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int resposta;

    printf("\nBem vindo ao trabalho de modularização!\n");
    printf("Para sair, digite um número menor do que 0\n");
    printf("\n");
    printf("Informação importante: Os valores dados como resposta são mais exatos/precisos (em 0,1, por exemplo) do que se forem feitos os cálculos com apenas duas casas decimais como é apresentado. Tal opção foi feita apenas para melhor a visualização.");
    printf("\n");


    do
    {
        printf("\nQual exercício, de 1 a 6, você gostaria de ver? ");
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

//Faça esse programa das seguintes formas:

// 1 - Em um programa principal
int ex01()
{
    setlocale(LC_ALL, "Portuguese");

    int N,a=1,b=0,c=0,deno = 2,cont;
    float div, soma = 0;
    printf("Digite o número de termos que deseja calcular: ");
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
    printf("O resultado do cálculo da sequência até %d é igual a %.2f.",N,soma);

    /*int num, a = 1, b = 0, auxiliar = 1, seq = 2;
    float divisao, aux2 = 0;

    printf("Digite o valor de N para o resultado da série: ");
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
    printf("A soma da sequência até o valor N é igual a %.2f",aux2);
    printf("\n");
*/
}
// ----


// 2 - Utilizando apenas um procedimento

int ex02()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da série: ");
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
    printf("A soma da sequência até o valor N é igual a %.2f",aux2);
    printf("\n");

}

// --


// 3 - Utilizando variáveis globais

float total = 0;

int ex03(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da série: ");
    scanf("%i",&num);

    encontraDiv(num);

    printf("\n");
    printf("A soma da sequência até o valor N é igual a %.2f",total);
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

// 4 - Utilizando função e variáveis globais


float resp;

int ex04()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o valor de N para o resultado da série: ");
    scanf("%i",&num);

    achaResposta(num);

    printf("\n");
    printf("A soma da sequência até o valor N é igual a %.2f",resp);
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


// 5 - Utilizando função passando N como parâmetro e retornando valor

int ex05()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float resposta;

    printf("Digite o valor de N para o resultado da série: ");
    scanf("%i",&num);

    resposta = encontraResposta(num);

    printf("\n");
    printf("A soma da sequência até o valor N é igual a %.2f",resposta);
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




// 6 - Utilizando procedimento passando N como parâmetro e retornando o valor em um outro parâmetro

int ex06()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float valorTotal = 0;

    printf("Digite o valor de N para o resultado da série: ");
    scanf("%i",&num);

    respFib(num, &valorTotal);

    printf("\n");
    printf("A soma da sequência até o valor N é igual a %.2f", valorTotal);
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
