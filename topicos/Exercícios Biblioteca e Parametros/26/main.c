#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "MB_JoaoVictor.h"


int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Bem vindo!");
    printf("\n");

    int x,y, resposta, resp;

    printf("\nDigite o primeiro número: ");
    scanf("%i",&x);
    printf("\nDigite o segundo número: ");
    scanf("%i",&y);

    printf("\n");

    do{

    printf("O que você deseja?\n[1] Multiplicação dos números\n[2] Soma dos números nesse intervalo\n[3] Quantidade de números ímpares nesse intervalo\n");
    scanf("%i",&resposta);

    switch(resposta){
    case 1:
        resp = multiplicaValor(x,y);
        printf("A multiplicação é igual a %i\n",resp);
        printf("\n");
        break;

    case 2:
        resp = somaValores(x,y);
        printf("A soma dos valores nesse intervalo é igual a %i",resp);
        printf("\n");
        break;

    case 3:
        resp = encontraImpar(x,y);
        printf("A quantidade de números ímpares nesse intervalo é igual a %i",resp);
        printf("\n");
        break;
    }

    system("pause");
    system("cls");

    } while(resposta > 0);

    return 0;
}
