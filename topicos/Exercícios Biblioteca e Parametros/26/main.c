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

    printf("\nDigite o primeiro n�mero: ");
    scanf("%i",&x);
    printf("\nDigite o segundo n�mero: ");
    scanf("%i",&y);

    printf("\n");

    do{

    printf("O que voc� deseja?\n[1] Multiplica��o dos n�meros\n[2] Soma dos n�meros nesse intervalo\n[3] Quantidade de n�meros �mpares nesse intervalo\n");
    scanf("%i",&resposta);

    switch(resposta){
    case 1:
        resp = multiplicaValor(x,y);
        printf("A multiplica��o � igual a %i\n",resp);
        printf("\n");
        break;

    case 2:
        resp = somaValores(x,y);
        printf("A soma dos valores nesse intervalo � igual a %i",resp);
        printf("\n");
        break;

    case 3:
        resp = encontraImpar(x,y);
        printf("A quantidade de n�meros �mpares nesse intervalo � igual a %i",resp);
        printf("\n");
        break;
    }

    system("pause");
    system("cls");

    } while(resposta > 0);

    return 0;
}
