#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

const int linha = 10;
const int coluna = 10;
void preenche(int m[linha][coluna]);
void valorMatriz (int m[linha][coluna]);
void posicao(int m[linha][coluna], int maior, int menor);
void encontraNum(int m[linha][coluna]);



// 1) Preencher uma matriz  de 10 x 10  posi��es com valores aleat�rios de 15 a 50 (utilize para cada n�mero a fun��o rand�fa�a uma fun��o que dados os valores inicial e final devolva um n�mero aleat�rio dentro deste intervalo) Em seguida imprima os �ndices(i,j) da matriz e o valor correspondente, na forma de matriz,bemcomochameosm�dulosabaixo

int main()
{
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int r, matriz[linha][coluna], i, j, maior, menor;

    printf("Bem vindo ao trabalho de matrizes!\n");
    printf("\n");


    maiorMenor(matriz);


    // Imprimindo a matriz //

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {

            printf("[%i][%i] - %2i ",i,j,matriz[i][j]);
        }
        printf("\n");

    }



    printf("\n");
    printf("\n(3) A soma dos valores da diagonal � igual a %i\n", somaDiagonal(matriz,i,j));
    printf("\n");
    valorMatriz (matriz);
    barra();
    encontraNum(matriz);
    barra();
    posicao(matriz,  maior,  menor);

}

// 2) Escreva um procedimento que receba uma matriz 10x10 (passagem de par�metro), imprimir o maior e o menor elemento da matriz bem como a posi��o de cada um.

void maiorMenor(int m[linha][coluna])
{

    int maior = 0, menor = 0, cont = 0, i,j;


    for( i = 0; i < linha; i++)
    {
        for( j = 0; j < coluna; j++)
        {

            m[i][j]  = numAleatorio();



            if(cont == 0)
            {
                maior = m[i][j];
                menor = m[i][j];
            }

            else
            {
                if (m[i][j] > maior)
                {
                    maior = m[i][j];
                }

                if (m[i][j] < menor)
                {
                    menor = m[i][j];
                }

            }

            cont++;
        }

    }

    posicao(m,maior,menor);

}

void posicao(int m[linha][coluna], int maior, int menor)
{

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (m[i][j] == maior)
            {
                printf("O maior valor desta matriz (%i) aparece na posi��o [%i][%i]\n",maior,i,j);

            }

        }
    }

    barra();

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (m[i][j] == menor)
            {
                printf("O menor valor desta matriz (%i) aparece na posi��o [%i][%i]\n",menor,i,j);

            }

        }
    }

    printf("\n");
}


// 3) Escreva uma fun��o que receba uma matriz 10x10 e retorne a soma dos elementos da diagonal.

int somaDiagonal(int m[linha][coluna])
{
    int somaD = 0, i,j;
    for (i = 0; i<linha; i++)
    {
        somaD += m[i][i];

    }

    return somaD;

}

// 4) Escreva um procedimento que receba uma matriz 10x10, pe�a ao usu�rio a posi��o [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posi��o. FLAG -1

void valorMatriz (int m[linha][coluna])
{

    int i,j;
    printf("\n(4)Digite a posi��o da linha (i): ");
    scanf("%i",&i);
    printf("\nDigite a posi��o da coluna (j): ");
    scanf("%i",&j);

    while(i >= 0 && j >= 0)
    {

        printf("\n");
        printf("[%i][%i] = %i",i,j,m[i][j]);
        printf("\n");

        printf("\nDigite a posi��o da linha (i): ");
        scanf("%i",&i);
        printf("\n");
        printf("Digite a posi��o da coluna (j): ");
        scanf("%i",&j);

    }


}


// 5) Escreva um procedimento que receba uma matriz 10x10, e um n�mero. O procedimento dever� verificar se o n�mero est� ou n�o na matriz. Se estiver imprima a(s) posi��o(�es) desse n�mero e se n�o estiver imprima a mensagem valor n�o encontrado.

void encontraNum(int m[linha][coluna]){
    int num, cont = 0;

    printf("\n(5)Digite um n�mero para ser encontrado na matriz acima: ");
    scanf("%i",&num);

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (m[i][j] == num)
            {
                printf("\O n�mero %i foi encontrado na posi��o [%i][%i]\n",num,i,j);
                cont++;

            }

        }
    }

    if (cont == 0)
        printf("\nO n�mero n�o foi encontrado na matriz!");

}

// Fun��o n�mero aleat�rio

int numAleatorio()
{

    //Fun��o que gera n�meros aleat�rios no intervalo de 15 a 50 //

    int r = rand() %(50 - (15 +1)) + 15;

    return r;
}

// Fun��o barra

int barra()
{
    //Fun��o que gera uma barra para fins de visualiza��o

    return printf("------------------------------------------------------\n");
}



