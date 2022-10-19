/*49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/
#include <stdio.h>
int main () {
    int seg, min, hor, dur, h, m, s;
    printf ("Digite o horario em h, min e seg: ");
    scanf ("%d%d%d", &h, &m, &s);
    printf ("Digite a duracao em horas, minutos e segundos: \n");
    scanf ("%d%d%d", &hor, &min, &seg);
    dur = (hor*3600) + (min*60) + seg;
    seg = dur;
    hor = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
    printf ("%d horas, %d minutos, %d segundos.", h+hor, m+min, s+seg);

    return 0;
}