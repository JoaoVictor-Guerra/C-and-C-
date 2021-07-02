#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

const int anoAtual = 2021;

class carro
{
public:
    //atributos:

    char marca[20], cor[10];
    int anoFabri;
    float valor;

    //m�todo construtor:

    carro()
    {

        printf("\nExecutando m�todo construtor");

        printf("\nDigite o modelo do carro: ");
        fflush(stdin);
        gets(marca);
        printf("\nDigite o valor do carro: ");
        scanf("%f",&valor);
        printf("\nDigite a cor do carro: ");
        fflush(stdin);
        gets(cor);
        printf("\nPor fim, o ano de fabrica��o: ");
        scanf("%i",&anoFabri);

    }

    carro(char M[20], float V, char C[10], int AF)
    {
        printf("\nExecutando m�todo construtor com par�metros\n");
        strcpy(marca, M);
        strcpy(cor, C);
        valor = V;
        anoFabri = AF;
    }

    //m�todo destrutor:

    ~carro()
    {
        printf("\nExecutando o m�todo destrutor\n");
        printf("O produto %s foi destru�do!\n",marca);

    }

    float calculaIPVA(int ano);

    //m�todo que imprime o carro:

    void imprimeCarro()
    {
        printf("\nNome do carro: %s",marca);
        printf("\nCor do carro: %s",cor);
        printf("\nValor do carro: %.2f",valor);
        printf("\nAno de fabrica��o do carro: %i",anoFabri);
        printf("\nValor do IPVA: %.2f",calculaIPVA(anoAtual));
        printf("\n");
    }
};


float carro::calculaIPVA(int ano)
{
    float resultado;

    resultado = (valor * 0.05);
    resultado = resultado - resultado * ((ano - anoFabri)*0.1);

    if(resultado <0)
    {
        resultado = 0;
    }

    return resultado;
}

// Sim, obg Roberto

int main()
{

    system("color 0F");
    setlocale(LC_ALL, "portuguese");
    carro c;

    carro c1("Volvo",80000,"Amarelo",2014);
    c.imprimeCarro();
    c1.imprimeCarro();
    printf("\n");
    system("pause");

    return 0;


}

