
int multiplicaValor(int num, int num2)
{
    //Fun��o que retorna a multiplica��o de dois n�meros

    return num * num2;
}

int somaValores(int num, int num2)
{
    //Fun��o que retorna a soma dos n�meros num dado intervalo

    int somanum = 0;

        for (num; num <= num2; num++)
        {
            somanum+=num;

        }


    return somanum;

}

int encontraImpar(int num, int num2)
{

    //Fun��o que retorna a quantidade de n�meros �mpares num intervalo

    int somanum = 0, cont = 0;
    for (num; num <= num2; num++)
    {
        if (num % 2 != 0)
            cont++;

    }

    return cont;
}
