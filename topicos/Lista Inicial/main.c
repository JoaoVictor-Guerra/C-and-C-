#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    exa();
    exb();
    exc();
    exd();
    exe();
    exf();
    exg();
    exh();
    exi();
    exj();
}


// Exerc�cio A

int exa()
{

    setlocale(LC_ALL, "Portuguese");


    printf("Letra A) Leia um n�mero e imprima seu sucessor.\n");

    int num;

    printf("Digite um n�mero para que eu possa mostrar o seu sucessor:");
    scanf("%i",&num);

    printf("O sucessor de seu n�mero � %i \n", num + 1);

    printf("=================================\n");
    return 0;
}

// Exerc�cio B

int exb()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Letra B) Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.\n");

   int num1,num2,num3,num4,cont;
   float media;

    printf("Digite um n�mero");
    scanf("%i",&num1);
    printf("Digite um segundo n�mero");
    scanf("%i",&num2);
    printf("Digite um terceiro n�mero");
    scanf("%i",&num3);
    printf("Digite o �ltimo n�mero");
    scanf("%i",&num4);


   media = (float) (num1 + num2 + num3 + num4)/4;
   printf("A m�dia entre %i, %i, %i e %i � igual a %.2f \n ", num1,num2,num3,num4,media);

   printf("=================================\n");

    return 0;
}


//Exerc�cio C


int exc()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra C) Fa�a um algoritmo que receba 3 (tr�s) notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.\n");

    int peso1,peso2,peso3;
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);

    printf("Agora, seu peso\n");
    scanf("%i",&peso1);


    printf("Digite a segunda nota\n");
    scanf("%f",&nota2);

    printf("Agora, seu peso\n");
    scanf("%i",&peso2);

    printf("Digite a �ltima nota\n");
    scanf("%f",&nota3);

    printf("Agora, seu peso\n");
    scanf("%i",&peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/ (peso1 + peso2 + peso3);

    printf("O resultado da m�dia � %.2f  \n",media);

    printf("=================================\n");

    return 0;
}

//Exerc�cio D

int exd()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra D) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\n");

    float temperatura, fahrenheit, celsius;

    printf("--- Conversor de Temperatura ---\n");
    printf("Digite a temperatura para convers�o (em Celsius)");
    scanf("%f",&temperatura);

    fahrenheit = (temperatura*9)/5 + 32;

    printf("%.2f graus celsius transcreve para %.2f fahrenheit.\n", temperatura, fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;

    printf("%.2f fahrenheit s�o %.2f celsius \n",fahrenheit,celsius);

    printf("=================================\n");


    return 0;
}


//Exerc�cio E


int exe()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra E) Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o novo sal�rio.\n");

    float salario,aumento, novo_salario;

    printf("Para calcularmos seu aumento, precisamos de algumas informa��es.\n Qual � o seu sal�rio?");
    scanf("%f",&salario);

    printf("E qual � o aumento (sem %)?");
    scanf("%f",&aumento);

    novo_salario = salario + (salario * (aumento/100));

    printf("Seu novo sal�rio � %.2f \n",novo_salario);

    printf("=================================\n");

    return 0;
}


//Exerc�cio F

int exf()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Letra F) Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um triangulo.\n");

   printf("=-=- �rea do Tri�ngulo -=-=\n");

   int base,altura;
   float formula;

   printf("Digite a medida da altura do tri�ngulo");
   scanf("%i",&altura);

   printf("Digite a medida da base do tri�ngulo");
   scanf("%i",&base);

   formula = (float)(base*altura)/2;

   printf("Com a base %i e altura %i, a �rea equivale a %.2f \n",base,altura,formula);

   printf("=================================\n");

   return 0;
}

//Exerc�cio G


int exg(){

    setlocale(LC_ALL, "Portuguese");

    printf("Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas.\n Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato.\n Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias\n");

    float saco_racao, gato1, gato2, quantidade_total;

    printf("Em KG, qual � a massa do saco de ra��o?");
    scanf("%f",&saco_racao);

    printf("Qual � a quantidade de ra��o dada para o primeiro gato? (Por dia, em gramas)");
    scanf("%f",&gato1);

    printf("Qual � a quantidade de ra��o dada para o segundo gato? (Por dia, em gramas)");
    scanf("%f",&gato2);

    quantidade_total = (gato1 * 5) + (gato2 * 5);

    printf("Ap�s 5 dias, ainda h� %.2f KG no saco de ra��o comprado.  \n",(((saco_racao*1000)- quantidade_total))/1000);

    printf("=================================\n");

    return 0;


}

//Exerc�cio H

int exh(){

    setlocale(LC_ALL, "Portuguese");

    printf("Letra H) Ler dois n�meros inteiros para vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");

    int a,b,c;

    printf("Digite o valor de A\n");
    scanf("%i",&a);

    printf("Agora, digite o valor de B\n");
    scanf("%i",&b);

    c = b;

    printf("A = %i \nB = %i",a,b);
    b = a;
    a = c;

    printf("\nTrocando A por B...");

    printf("\nA = %i \nB = %i \n",a,b);

    printf("=================================\n");

    return 0;
}

//Exerc�cio I


int exi(){

     setlocale(LC_ALL, "Portuguese");

     printf("Leia um n�mero e imprima o resto da divis�o por 7. Utilize o comando resto (a,b) na linguagem C (a % b).\n");

     int valor, divinteira;

     printf("Digite um n�mero para mostrar sua divis�o inteira por 7  ");
     scanf("%i",&valor);

     divinteira = (valor % 7);

     printf("O resultado da divis�o � %i \n", divinteira);

     printf("=================================\n");

     return 0;
}


//Exerc�cio J

int exj(){

     setlocale(LC_ALL, "Portuguese");

     printf("Letra J) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do n�mero de termos.\n");

     int primeiro_termo, segundo_termo, n_termos, sn;


     printf("Digite o primeiro termo");
     scanf("%i",&primeiro_termo);

     printf("Digite o segundo termo?");
     scanf("%i",&segundo_termo);

     printf("Digite o n�mero de termos");
     scanf("%i",&n_termos);


     sn = ((primeiro_termo + segundo_termo) * n_termos) / 2;


     printf("A soma dos termos dessa P.A � %i \n",sn);

    return 0;

}
