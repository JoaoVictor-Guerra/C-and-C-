#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese");

    int resposta, continuar;


    printf("Que exerc�cio [de 1 a 10] voc� gostaria de ver?\nPara sair, digite -1");
    printf("\n");
    scanf("%i",&resposta);
    do{
        switch(resposta)
        {
            case 1:
                bordas();
                quest01();
                bordas();
                resposta++;
                break;
            case 2:
                bordas();
                quest02();
                bordas();
                resposta++;
                break;
            case 3:
                bordas();
                quest03();
                bordas();
                resposta++;
                break;
            case 4:
                bordas();
                quest04();
                bordas();
                resposta++;
                break;
            case 5:
                bordas();
                quest05();
                bordas();
                resposta++;
                break;
            case 6:
                bordas();
                quest06();
                bordas();
                resposta++;
                break;
            case 7:
                bordas();
                quest07();
                bordas();
                resposta++;
                break;
            case 8:
                bordas();
                quest08();
                bordas();
                resposta++;
                break;
            case 9:
                bordas();
                quest09();
                bordas();
                resposta++;
                break;
            case 10:
                bordas();
                quest10();
                bordas();
                resposta++;
                break;
        }
    } while (continuar == 1);

    printf("Fim do programa!");

    return 0;
}

int bordas()
{
    printf("\n=======================================================\n");
}


//Quest�o 1


int quest01()
{
    printf("Fa�a um algoritmo que leia um conjunto de n�meros X e imprima a quantidade de n�meros para QPares e a quantidade de n�meros �mpares QImpares lidos. Admita que o valor 9999 � utilizado como FLAG para fim de leitura.\n");

    setlocale(LC_ALL,"Portuguese");

    int num = 0, Qpares, Qimpares, cont1 = 0, cont2 = 0;


    while(num != 9999)
    {

        printf("Digite um n�mero");
        scanf("%i",&num);

        if (num == 9999)
        {

        }

        else
        {

            if(num % 2 == 0)
            {
                cont1++;

            }

            if(num % 2 != 0)
            {
                cont2++;

            }
        }
    }

    printf("\nAo final, foram apresentados %i n�meros pares e %i n�meros �mpares.",cont1,cont2);

    return 0;

}

//Quest�o 2

int quest02()
{

    printf("Fa�a um programa que leia um conjunto indeterminado de n�meros inteiros positivos e imprima o maior, o menor e a m�dia aritm�tica desse conjunto de dados. (Flag -1)\n");

    setlocale(LC_ALL,"Portuguese");

    int cont, maior, menor, reserva, media_soma, num, num2, media = 0;



    printf("Digite um n�mero ");
    scanf("%i",&num2);

    maior = num2;
    menor = num2;
    num2 = reserva;

    while (num != -1)
    {

        printf("Digite um n�mero ");
        scanf("%i",&num);

        if (num < 0)
        {
            if(num == -1)
            {


            }

            else
            {
                printf("S� s�o aceitos n�meros inteiros positivos!");
            }



        }

        else
        {

            if(num > reserva)
            {
                maior = num;

            }

            if(num < reserva)
            {

                menor = num;

            }

            media_soma += num;
            reserva = num;
            cont++;
        }
    }

    media = media_soma/cont;

    printf("\nO maior n�mero da lista foi: %i \nO menor n�mero da lista foi: %i \nA m�dia foi igual a: %i",maior,menor,media);

    return 0;
}

//Quest�o 3

int quest03()
{
    setlocale(LC_ALL, "Portuguese");

    int c, resposta, fat = 1;

    printf("Digite um n�mero para calcular seu fatorial\n");
    scanf("%i", &resposta);

    for (c = 1; c <= resposta; c++)
    {
        fat = fat * c;
    }


    printf("O fatorial de %i = %i\n", resposta, fat);


    return 0;
}

//Quest�o 4



int quest04(){

    setlocale(LC_ALL, "Portuguese");

    printf("Exerc�cio n�o realizado");



    return 0;



}

//Quest�o 5


int quest05()
{

    setlocale(LC_ALL, "Portuguese");

    int num,i = 1, contador,b,c, a = 0;

    printf("Digite um n�mero maior que dois (X>2) para a sequ�ncia\n ");
    scanf("%i",&num);

    printf("\n1");

    for(contador = 1; contador < num; contador++ )
    {

        c = a + i;
        printf("\n%i",c);

        a = i;
        i = c;
    }


    return 0;
}

//Quest�o 6

int quest06(){

    setlocale(LC_ALL, "Portuguese");

    printf("Exerc�cio n�o realizado");

}

//Quest�o 7


int quest07()
{

    setlocale(LC_ALL, "Portuguese");

    int pa1,pa2,pa3,pa4,pa5, num, cont, completo, cont2;


    for(cont = 10000; cont <= 100000; cont++)
    {
        num = cont;
        pa1 = num%10;
        pa2 = (num%100 - pa1)/10;
        pa3 = (num%1000 - pa2)/100;
        pa4= num/1000 - ((num/10000) * 10);
        pa5 = num/10000;

        completo = pa1*10000 + pa2*1000 + pa3*100 + pa4*10 + pa5;

        if (num == completo)
        {

            printf("\t%3i � um pal�ndromo!",num);
            cont2++;
        }

    }

    printf("\n");
    printf("\nExistem %i pal�ndromos nesse intervalo!",cont2);


    return 0;
}


//Quest�o 8

int quest08()
{

    setlocale(LC_ALL, "Portuguese");

    int cont, pa1,pa2, completo, soma, quadrado;


    for (cont = 1000; cont <= 9999 ; cont++)
    {
        pa1 = cont/100;
        pa2 = cont%100;

        soma = pa1 + pa2;
        quadrado = soma*soma;

        if(cont == quadrado)
        {
            printf("\n%i segue essa propriedade!\n",cont);
        }
    }

    return 0;
}

//Quest�o 9

int quest09()
{

    setlocale(LC_ALL, "Portuguese");

    int resposta, contador, num_computador, pont;

    printf("\nJogo de Cara ou Coroa!\n");
    printf("Valores: para CARA, usa-se 0. Para COROA, 1\n");

    for (contador = 1; contador<=10 ; contador++)
    {

        printf("\nCara [0] ou Coroa [1]? ");
        scanf("%i",&resposta);

        if (resposta !=0 && resposta !=1)
        {

            printf("\nValores inv�lidos. Digite 0 ou 1!\n");

        }

        else
        {
            num_computador = (rand() % 2 +0);
            if (resposta == num_computador){
                printf("\n");
                printf("\nVoc� acertou! Pontua��o +1!");
                pont++;
            }

            else{
                printf("\n");
                printf("\nVoc� errou! O computador venceu essa rodada!");
            }

        if (pont == 5){
            printf("\nUau! Voc� j� obteu 5 pontos!");
        }
        if (pont == 8){
            printf("\nQuase l�...!");
        }
        if (pont <= 4 && contador == 9){
            printf("\nSua sorte �... um tanto question�vel.");
        }

        }

    }

    printf("\nAo final, sua pontua��o foi de %i pontos.\nDas 10 tentativas, voc� acertou %i e errou %i", pont, pont,(10 - pont));


    return 0;

}

//Quest�o 10

int quest10()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Exerc�cio n�o realizado");






}
