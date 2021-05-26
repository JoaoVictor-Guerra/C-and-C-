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


// Exercício A

int exa()
{

    setlocale(LC_ALL, "Portuguese");


    printf("Letra A) Leia um número e imprima seu sucessor.\n");

    int num;

    printf("Digite um número para que eu possa mostrar o seu sucessor:");
    scanf("%i",&num);

    printf("O sucessor de seu número é %i \n", num + 1);

    printf("=================================\n");
    return 0;
}

// Exercício B

int exb()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Letra B) Calcule a média aritmética de quatro números inteiros dados.\n");

   int num1,num2,num3,num4,cont;
   float media;

    printf("Digite um número");
    scanf("%i",&num1);
    printf("Digite um segundo número");
    scanf("%i",&num2);
    printf("Digite um terceiro número");
    scanf("%i",&num3);
    printf("Digite o último número");
    scanf("%i",&num4);


   media = (float) (num1 + num2 + num3 + num4)/4;
   printf("A média entre %i, %i, %i e %i é igual a %.2f \n ", num1,num2,num3,num4,media);

   printf("=================================\n");

    return 0;
}


//Exercício C


int exc()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra C) Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.\n");

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

    printf("Digite a última nota\n");
    scanf("%f",&nota3);

    printf("Agora, seu peso\n");
    scanf("%i",&peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/ (peso1 + peso2 + peso3);

    printf("O resultado da média é %.2f  \n",media);

    printf("=================================\n");

    return 0;
}

//Exercício D

int exd()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra D) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\n");

    float temperatura, fahrenheit, celsius;

    printf("--- Conversor de Temperatura ---\n");
    printf("Digite a temperatura para conversão (em Celsius)");
    scanf("%f",&temperatura);

    fahrenheit = (temperatura*9)/5 + 32;

    printf("%.2f graus celsius transcreve para %.2f fahrenheit.\n", temperatura, fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;

    printf("%.2f fahrenheit são %.2f celsius \n",fahrenheit,celsius);

    printf("=================================\n");


    return 0;
}


//Exercício E


int exe()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Letra E) Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.\n");

    float salario,aumento, novo_salario;

    printf("Para calcularmos seu aumento, precisamos de algumas informações.\n Qual é o seu salário?");
    scanf("%f",&salario);

    printf("E qual é o aumento (sem %)?");
    scanf("%f",&aumento);

    novo_salario = salario + (salario * (aumento/100));

    printf("Seu novo salário é %.2f \n",novo_salario);

    printf("=================================\n");

    return 0;
}


//Exercício F

int exf()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Letra F) Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.\n");

   printf("=-=- Área do Triângulo -=-=\n");

   int base,altura;
   float formula;

   printf("Digite a medida da altura do triângulo");
   scanf("%i",&altura);

   printf("Digite a medida da base do triângulo");
   scanf("%i",&base);

   formula = (float)(base*altura)/2;

   printf("Com a base %i e altura %i, a área equivale a %.2f \n",base,altura,formula);

   printf("=================================\n");

   return 0;
}

//Exercício G


int exg(){

    setlocale(LC_ALL, "Portuguese");

    printf("Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas.\n Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato.\n Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias\n");

    float saco_racao, gato1, gato2, quantidade_total;

    printf("Em KG, qual é a massa do saco de ração?");
    scanf("%f",&saco_racao);

    printf("Qual é a quantidade de ração dada para o primeiro gato? (Por dia, em gramas)");
    scanf("%f",&gato1);

    printf("Qual é a quantidade de ração dada para o segundo gato? (Por dia, em gramas)");
    scanf("%f",&gato2);

    quantidade_total = (gato1 * 5) + (gato2 * 5);

    printf("Após 5 dias, ainda há %.2f KG no saco de ração comprado.  \n",(((saco_racao*1000)- quantidade_total))/1000);

    printf("=================================\n");

    return 0;


}

//Exercício H

int exh(){

    setlocale(LC_ALL, "Portuguese");

    printf("Letra H) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");

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

//Exercício I


int exi(){

     setlocale(LC_ALL, "Portuguese");

     printf("Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).\n");

     int valor, divinteira;

     printf("Digite um número para mostrar sua divisão inteira por 7  ");
     scanf("%i",&valor);

     divinteira = (valor % 7);

     printf("O resultado da divisão é %i \n", divinteira);

     printf("=================================\n");

     return 0;
}


//Exercício J

int exj(){

     setlocale(LC_ALL, "Portuguese");

     printf("Letra J) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.\n");

     int primeiro_termo, segundo_termo, n_termos, sn;


     printf("Digite o primeiro termo");
     scanf("%i",&primeiro_termo);

     printf("Digite o segundo termo?");
     scanf("%i",&segundo_termo);

     printf("Digite o número de termos");
     scanf("%i",&n_termos);


     sn = ((primeiro_termo + segundo_termo) * n_termos) / 2;


     printf("A soma dos termos dessa P.A é %i \n",sn);

    return 0;

}
