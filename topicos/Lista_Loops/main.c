#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int resposta;


    printf("Que exerc�cio [de 1 a 6] voc� gostaria de ver?\nPara sair, digite -1");
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
            printf("Inv�lido! Exerc�cio n�o encontrado");
            break;
    }

    return 0;


}


//Bordas para o menu

int bordas()
{
    printf("\n=======================================================\n");
}


//Exerc�cio 1

int ex01()
{
    printf("1 - Escrever a sequencia de 1 at� 10\n");

    setlocale(LC_ALL, "Portuguese");

    int valor = 1;


    while(valor <= 10)
    {
        printf("%i\n", valor);
        valor += 1;


    }

    return 0;

}

//Exerc�cio 2

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

//Exerc�cio 3


int ex03()
{
    printf("\nLeia um numero e imprima os n�meros impares de 1 at� esse n�mero\n");

    setlocale(LC_ALL, "Portuguese");

    int num, par, valor = 1;

    printf("Digite um n�mero de sua escolha!");
    scanf("%i",&num);

    while (valor <= num)
    {
        if ((valor % 2) != 0)
        {
            printf("\n%i � um n�mero �mpar!\n",valor);
        }

        valor++;

    }

    return 0;

}

//Exerc�cio 4


int ex04()
{
    printf("Escrever um algoritmo, para calcular e imprimir o fatorial de um n�mero lido do teclado.\nEx. Fatorial de 5! = 5x4x3x2x1=120");

    setlocale(LC_ALL, "Portuguese");

    int num_inicial, fat = 1, cont;

    printf("\nDigite um n�mero para calcular o seu fatorial");
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

//Exerc�cio 5

int ex05()
{

    printf("A s�rie de Fibonacci � formada pela sequ�ncia:\n1, 1, 2, 3, 5, 8, 13, 21, 34, ...\nEscreva um algoritmo que pe�a um n�mero N maior que 2. Gere e imprima a s�rie de 1 at� este en�simo termo.");


    setlocale(LC_ALL, "Portuguese");

    int a = 0,b = 1,c, contador = 1,num;

    printf("Digite um n�mero maior que dois(2)");
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

//Exerc�cio 6

ex06()
{

    setlocale(LC_ALL, "Portuguese");

    printf("O numero 3025 possui a seguinte caracter�stica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais s�o os n�meros de 4 d�gitos possuem essa caracter�stica?\n");


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
