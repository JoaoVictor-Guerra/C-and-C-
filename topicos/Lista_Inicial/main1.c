#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //exa();
    //exb();
    //exc();
    //exd();
    //exe();
    //****exf();
    //exg();
    exh();
}


int exa()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número para que eu possa mostrar o seu sucessor:");
    scanf("%i",&num);

    printf("O sucessor de seu número é %i", num + 1);
    return 0;
}

int exb()
{
   setlocale(LC_ALL, "Portuguese");

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
   printf("A média entre %i, %i, %i e %i é igual a %.2f ", num1,num2,num3,num4,media);

    return 0;
}
int exc()     //////
{
    setlocale(LC_ALL, "Portuguese");

    int peso1,peso2,peso3;
    float nota1, nota2, nota3, media;

    //printf("Digite a primeira nota\n");
    //scanf("%f",&nota1);

    printf("Agora, seu peso\n");
    scanf("i",&peso1);


    //printf("Digite a segunda nota\n");
    //scanf("%f",&nota2);

    printf("Agora, seu peso\n");
    scanf("i",&peso2);

    //printf("Digite a última nota\n");
    //scanf("%f",&nota3);

    printf("Agora, seu peso\n");
    scanf("i",&peso3);

    media = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) / 3;

    printf("O resultado da média é %.2f",media);

    return 0;
}

int exd()
{
    setlocale(LC_ALL, "Portuguese");

    float temperatura, fahrenheit;

    printf("--- Conversor de Temperatura ---\n");
    printf("Digite a temperatura para conversão (em Celsius)");
    scanf("%f",&temperatura);

    fahrenheit = (temperatura*9)/5 + 32;

    printf("%.2f graus celsius transcreve para %.2f fahrenheit.", temperatura, fahrenheit);


    return 0;
}

int exe()
{
    setlocale(LC_ALL, "Portuguese");

    float salario,aumento, novo_salario;

    printf("Para calcularmos seu aumento, precisamos de algumas informações.\n Qual é o seu salário?");
    scanf("%f",&salario);

    printf("E qual é o aumento (sem %)?");
    scanf("%f",&aumento);

    novo_salario = salario + (salario * (aumento/100));

    printf("Seu novo salário é %.2f",novo_salario);

    return 0;
}

int exf()
{
   setlocale(LC_ALL, "Portuguese");

   printf("=-=- Área do Triângulo -=-=\n");

   int base,altura;
   float formula;

   printf("Digite a medida da altura do triângulo");
   scanf("%i",&altura);

   printf("Digite a medida da base do triângulo");
   scanf("%i",&base);

   formula = (float)(base*altura)/2;

   printf("Com a base %i e altura %i, a área equivale a %.2f",base,altura,formula);

   return 0;
}
int exg(){
//

}
int exh(){
    setlocale(LC_ALL, "Portuguese");

    int a,b,c;

    printf("Digite o valor de A\n");
    scanf("%i",&a);

    printf("Agora, digite o valor de B\n");
    scanf("i",&b);

    c = b;

    printf("A = %i \n B = %i",a,b);
    b = a;
    a = c;

    printf("Trocando A por B...");

    printf("A = %i \n B = %i",b,c);

    return 0;
}
