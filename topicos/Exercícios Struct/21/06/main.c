#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura de Dados

struct Taluno
{
    char nome[50];
    int matricula, statusMatriculado;
    float notas[3];
};
typedef struct Taluno aluno;

//

// Chamando funções e procedimentos

aluno cadastrAluno();
void alteraAluno(aluno *a);
void excluiAluno(aluno *a);
void imprimeAluno(aluno a);
void gravAluno(aluno *a);

//


int main()
{

    setlocale(LC_ALL,"portuguese");

    aluno a[3];

    int resposta, matricula;

    do
    {
        system("cls");
        printf("Escolha:\n");
        printf("a - Inserir aluno\n");
        printf("b - Alterar aluno\n");
        printf("c - Excluir aluno\n");
        printf("d - Imprimir aluno\n");
        printf("e - Gravar aluno\n");

        printf("\n");

        resposta = getch();

        switch(resposta)
        {
        case 'a':
            for(int i = 0; i < 3; i++)
            {
                a[i] = cadastrAluno();
            }
            break;

        case 'b':

            printf("\nDigite o número da matrícula do aluno desejado: ");
            scanf("%i",&matricula);
            for(int i = 0; i < 3; i++)
            {
                if(a[i].matricula == matricula)
                {
                    if(a[i].statusMatriculado == 1)
                    {
                        alteraAluno(&a[i]);
                    }

                }

            }
            break;

        case 'c':
            printf("\nDigite o número da matrícula do aluno desejado: ");
            scanf("%i",&matricula);

            for(int i = 0; i < 3; i++)
            {
                if(a[i].matricula == matricula)
                {
                    if(a[i].statusMatriculado == 1)
                    {
                        excluiAluno(&a[i]);
                    }

                }
            }
            break;

        case 'd':
            printf("\nDigite o número da matrícula do aluno desejado: ");
            scanf("%i",&matricula);

            for(int i = 0; i < 3; i++)
            {
                if(a[i].matricula == matricula)
                {
                    if(a[i].statusMatriculado == 1)
                    {
                        imprimeAluno(a[i]);
                    }

                }
            }
            break;

        case 'e':
            printf("\nDigite o número da matrícula do aluno desejado: ");
            scanf("%i",&matricula);

            for(int i = 0; i < 3; i++)
            {
                if(a[i].matricula == matricula)
                {
                    if(a[i].statusMatriculado == 1)
                    {
                        gravAluno(&a[i]);
                    }

                }
            }

        }

    }
    while(resposta != 'e');

    return 0;

}


aluno cadastrAluno()
{
    printf("---------------------------------------------");

    aluno a;

    // Cadastrando o NOME

    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    gets(a.nome);

    // Cadastrando a MATRÍCULA

    printf("\nDigite o número da matrícula: ");
    scanf("%i",&a.matricula);

    // Cadastrando as NOTAS

    for(int i = 0; i < 3; i++)
    {

        int j = i + 1;

        printf("\nPara %s, digite o valor da Nota %i: ",a.nome,j);
        fflush(stdin);
        scanf("%f",&a.notas[i]);
    }

    a.statusMatriculado = 1;

    return a;
}

void alteraAluno(aluno *a)
{

    printf("---------------------------------------------");

    // Cadastrando o NOME

    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    gets(a->nome);

    // Cadastrando a MATRÍCULA

    printf("\nDigite o número da matrícula: ");
    scanf("%i",&a->matricula);

    // Cadastrando as NOTAS

    for(int i = 0; i < 3; i++)
    {

        int j = i + 1;

        printf("\nPara %s, digite o valor da Nota %i: ",a->nome,j);
        fflush(stdin);
        scanf("%f",&a->notas[i]);
    }

    a->statusMatriculado = 1;

}

void excluiAluno(aluno *a)
{

    a->statusMatriculado = 0;



}

void imprimeAluno(aluno a)
{

    printf("\nNome do(a) aluno(a): %s",a.nome);
    printf("\nNúmero da matrícula: %i",a.matricula);

    for(int i = 0; i < 3; i++)
    {
        printf("\nNota %i: %.2f",i,a.notas[i]);
    }
    system("pause");

}

void gravAluno(aluno *a)
{

    FILE * arquivo;

    if(arquivo=fopen("dados.txt","w") == NULL)
    {
        printf("\nErro de abertura!");

    }

    else
    {
        fprintf(arquivo,"\nNome do(a) aluno(a): %s",a->nome);
        fprintf(arquivo,"\nNúmero da matrícula: %i",a->matricula);

        for(int i = 0; i <= 3; i++)
        {
            fprintf(arquivo,"Nota %i: %.2f",i,a->notas[i]);
        }

        fclose(arquivo);



    }

}

