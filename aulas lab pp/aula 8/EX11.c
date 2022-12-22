/*11. Faça um programa que seja uma agenda de compromissos e:
 Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
 Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.*/
#include <stdio.h>

typedef struct
{
    int dd, mm, aa;
}data;

typedef struct
{
    char compromisso[60];
    data date;

}agenda;

int main ()
{
    int i, mes = 100, ano;
    agenda agendas[5];

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o compromisso: ");
        setbuf (stdin, NULL);
        fgets (agendas[i].compromisso, 60, stdin);

        printf ("Digite a data do compromisso: ");
        scanf ("%d%d%d", &agendas[i].date.dd, &agendas[i].date.mm, &agendas[i].date.aa);
    }

    do
    {
        printf ("Digite mes e ano para pesquisa: ");
        scanf ("%d%d", &mes, &ano);

        for (i = 0; i < 5; i++)
        {
            if ((agendas[i].date.aa == ano) && (agendas[i].date.mm == mes))
            {
                fputs (agendas[i].compromisso, stdout);
                printf ("no dia %d/%d/%d\n", agendas[i].date.dd, agendas[i].date.mm, agendas[i].date.aa);
            }
        }
    }while(mes != 0);

    printf ("Obrigado");

    return 0;
}