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



// 1) Preencher uma matriz  de 10 x 10  posições com valores aleatórios de 15 a 50 (utilize para cada número a função rand–faça uma função que dados os valores inicial e final devolva um número aleatório dentro deste intervalo) Em seguida imprima os índices(i,j) da matriz e o valor correspondente, na forma de matriz,bemcomochameosmódulosabaixo

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
    printf("\n(3) A soma dos valores da diagonal é igual a %i\n", somaDiagonal(matriz,i,j));
    printf("\n");
    valorMatriz (matriz);
    barra();
    encontraNum(matriz);
    barra();
    posicao(matriz,  maior,  menor);

}

// 2) Escreva um procedimento que receba uma matriz 10x10 (passagem de parâmetro), imprimir o maior e o menor elemento da matriz bem como a posição de cada um.

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
                printf("O maior valor desta matriz (%i) aparece na posição [%i][%i]\n",maior,i,j);

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
                printf("O menor valor desta matriz (%i) aparece na posição [%i][%i]\n",menor,i,j);

            }

        }
    }

    printf("\n");
}


// 3) Escreva uma função que receba uma matriz 10x10 e retorne a soma dos elementos da diagonal.

int somaDiagonal(int m[linha][coluna])
{
    int somaD = 0, i,j;
    for (i = 0; i<linha; i++)
    {
        somaD += m[i][i];

    }

    return somaD;

}

// 4) Escreva um procedimento que receba uma matriz 10x10, peça ao usuário a posição [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posição. FLAG -1

void valorMatriz (int m[linha][coluna])
{

    int i,j;
    printf("\n(4)Digite a posição da linha (i): ");
    scanf("%i",&i);
    printf("\nDigite a posição da coluna (j): ");
    scanf("%i",&j);

    while(i >= 0 && j >= 0)
    {

        printf("\n");
        printf("[%i][%i] = %i",i,j,m[i][j]);
        printf("\n");

        printf("\nDigite a posição da linha (i): ");
        scanf("%i",&i);
        printf("\n");
        printf("Digite a posição da coluna (j): ");
        scanf("%i",&j);

    }


}


// 5) Escreva um procedimento que receba uma matriz 10x10, e um número. O procedimento deverá verificar se o número está ou não na matriz. Se estiver imprima a(s) posição(ões) desse número e se não estiver imprima a mensagem valor não encontrado.

void encontraNum(int m[linha][coluna]){
    int num, cont = 0;

    printf("\n(5)Digite um número para ser encontrado na matriz acima: ");
    scanf("%i",&num);

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (m[i][j] == num)
            {
                printf("\O número %i foi encontrado na posição [%i][%i]\n",num,i,j);
                cont++;

            }

        }
    }

    if (cont == 0)
        printf("\nO número não foi encontrado na matriz!");

}

// Função número aleatório

int numAleatorio()
{

    //Função que gera números aleatórios no intervalo de 15 a 50 //

    int r = rand() %(50 - (15 +1)) + 15;

    return r;
}

// Função barra

int barra()
{
    //Função que gera uma barra para fins de visualização

    return printf("------------------------------------------------------\n");
}



