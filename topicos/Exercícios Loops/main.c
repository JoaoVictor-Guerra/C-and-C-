#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int resposta;


    printf("Que exercício [de 1 a 6] você gostaria de ver?\nPara sair, digite -1");
    printf("\n");
    scanf("%i",&resposta);

    switch(resposta)
    {
        case 1:
            bordas();
            ex01();
            bordas();
            break;
        case 2:
            bordas();
            ex02();
            bordas();
            break;
        case 3:
            bordas();
            ex03();
            bordas();
            break;
        case 4:
            bordas();
            ex04();
            bordas();
            break;
        case 5:
            bordas();
            ex05();
            bordas();
            break;
        case 6:
            bordas();
            ex06();
            bordas();
            break;
        case -1:
            printf("Inválido! Exercício não encontrado");
            break;
    }

    return 0;


}


//Bordas para o menu

int bordas()
{
    printf("\n=======================================================\n");
}


//Exercício 1

int ex01()
{
    printf("1 - Escrever a sequencia de 1 até 10\n");

    setlocale(LC_ALL, "Portuguese");

    int valor = 1;


    while(valor <= 10)
    {
        printf("%i\n", valor);
        valor += 1;


    }

    return 0;

}

//Exercício 2

int ex02()
{
    printf("2 - Escrever a sequencia de 10 ate 1\n");

    setlocale(LC_ALL, "Portuguese");

    int valor = 10;

    while(valor>=1)
    {
        printf("%i\n",valor);
        valor-= 1;
    }

    printf("\nFim do programa!");

    return 0;

}

//Exercício 3


int ex03()
{
    printf("\nLeia um numero e imprima os números impares de 1 até esse número\n");

    setlocale(LC_ALL, "Portuguese");

    int num, par, valor = 1;

    printf("Digite um número de sua escolha!");
    scanf("%i",&num);

    while (valor <= num)
    {
        if ((valor % 2) != 0)
        {
            printf("\n%i é um número ímpar!\n",valor);
        }

        valor++;

    }

    return 0;

}

//Exercício 4


int ex04()
{
    printf("Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado.\nEx. Fatorial de 5! = 5x4x3x2x1=120");

    setlocale(LC_ALL, "Portuguese");

    int num_inicial, fat = 1, cont;

    printf("\nDigite um número para calcular o seu fatorial");
    scanf("%i",&num_inicial);

    cont = num_inicial;

    while(cont >= 1)
    {
        fat *= cont;
        cont--;
    }

    printf("%i",fat);


    return 0;
}

//Exercício 5

int ex05()
{

    printf("A série de Fibonacci é formada pela sequência:\n1, 1, 2, 3, 5, 8, 13, 21, 34, ...\nEscreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo termo.");


    setlocale(LC_ALL, "Portuguese");

    int a = 0,b = 1,c, contador = 1,num;

    printf("Digite um número maior que dois(2)");
    scanf("%i",&num);

    printf("\n1");

    while(contador<num)
    {
        c = a + b;
        printf("\n%i",c);
        contador ++;
        a = b;
        b = c;

    }

    return 0;


}

//Exercício 6

ex06()
{

    setlocale(LC_ALL, "Portuguese");

    printf("O numero 3025 possui a seguinte característica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais são os números de 4 dígitos possuem essa característica?\n");


    int p1, p2, soma, quadrado, intervalo = 1000;

    while(intervalo <= 9999)
    {
        p1 = (int) intervalo/100;
        p2 = intervalo%100;

        soma = p1 + p2;

        quadrado = pow(soma,2);

        if (intervalo == quadrado)
        {
            printf("\n%i",intervalo);
        }

        intervalo++;
    }



    return 0;






}
