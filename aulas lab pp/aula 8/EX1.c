/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso*/
#include <stdio.h>

struct horario
{
    int hor;
    int min;
    int seg;
};
typedef struct horario Horario;

int main ()
{
    Horario x;

    printf ("Digite as horas, minutos e segundos: ");
    scanf ("%d%d%d", &x.hor, &x.min, &x.seg);

    printf ("O horario digitado foi: %d:%d:%d", x.hor, x.min, x.seg);

    return 0;
}
