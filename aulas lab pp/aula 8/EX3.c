/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/
#include <stdio.h>

struct alunos
{
    char nome[50];
    char matr[20];
    char curso[20];
};
typedef struct alunos alunos;

int main ()
{  
    alunos alun[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite seu nome: ");
        setbuf (stdin, NULL);
        fgets(alun[i].nome, 50, stdin);

        printf ("Digite sua matricula: ");
        setbuf (stdin, NULL);
        fgets(alun[i].matr, 20, stdin);

        printf ("Digite seu curso: ");
        setbuf (stdin, NULL);
        fgets(alun[i].curso, 50, stdin);
    }

    for (i = 0; i < 5; i++)
    {
        printf ("\nO aluno %s tem matricula numero %s e cursa %s", alun[i].nome, alun[i].matr, alun[i].curso);
    }


    return 0;
}