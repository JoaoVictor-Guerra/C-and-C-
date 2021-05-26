
int multiplicaValor(int num, int num2)
{
    //Função que retorna a multiplicação de dois números

    return num * num2;
}

int somaValores(int num, int num2)
{
    //Função que retorna a soma dos números num dado intervalo

    int somanum = 0;

        for (num; num <= num2; num++)
        {
            somanum+=num;

        }


    return somanum;

}

int encontraImpar(int num, int num2)
{

    //Função que retorna a quantidade de números ímpares num intervalo

    int somanum = 0, cont = 0;
    for (num; num <= num2; num++)
    {
        if (num % 2 != 0)
            cont++;

    }

    return cont;
}
