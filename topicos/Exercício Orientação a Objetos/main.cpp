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

    //método construtor:

    carro()
    {

        printf("\nExecutando método construtor");

        printf("\nDigite o modelo do carro: ");
        fflush(stdin);
        gets(marca);
        printf("\nDigite o valor do carro: ");
        scanf("%f",&valor);
        printf("\nDigite a cor do carro: ");
        fflush(stdin);
        gets(cor);
        printf("\nPor fim, o ano de fabricação: ");
        scanf("%i",&anoFabri);

    }

    carro(char M[20], float V, char C[10], int AF)
    {
        printf("\nExecutando método construtor com parâmetros\n");
        strcpy(marca, M);
        strcpy(cor, C);
        valor = V;
        anoFabri = AF;
    }

    //método destrutor:

    ~carro()
    {
        printf("\nExecutando o método destrutor\n");
        printf("O produto %s foi destruído!\n",marca);

    }

    float calculaIPVA(int ano);

    //método que imprime o carro:

    void imprimeCarro()
    {
        printf("\nNome do carro: %s",marca);
        printf("\nCor do carro: %s",cor);
        printf("\nValor do carro: %.2f",valor);
        printf("\nAno de fabricação do carro: %i",anoFabri);
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

