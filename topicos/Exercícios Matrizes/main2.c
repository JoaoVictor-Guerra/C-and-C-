#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

float* retornaVetor(int num);
void imprimeVetor(int, float *);


int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int num;
    float *vet;

    printf("Bem vindo!\n");
    printf("\n");

    printf("Digite um número inteiro N: ");
    scanf("%i",&num);
    printf("\n");

    vet = retornaVetor(num);

    imprimeVetor(num,vet);


}

//Funçao que retorna um vetor do tipo real

float* retornaVetor(int num)
{
    float *vetor_real, ro;

    vetor_real = malloc(sizeof(float)*num);

    for(int i = 0; i<num; i++)
    {
        ro =  rand() %((50 - 30) + 1) + 30 + (rand() %100)/100.0;
        if(ro > 50)
            ro = 50;

        vetor_real[i] = ro;

    }

    free(vetor_real);

    return vetor_real;
}

//Procedimento que imprime um vetor do tipo real

void imprimeVetor(int num, float *vetor)
{

    for(int i = 0; i<num; i++)
    {
        printf("\nValor na posição [%i] = %.2f",i,vetor[i]);
    }


}

