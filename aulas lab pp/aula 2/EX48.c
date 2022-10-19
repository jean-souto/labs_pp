/*48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/
#include <stdio.h>
int main () {
    int seg, min, hor;
    printf ("Digite um valor em segundos: \n");
    scanf ("%d", &seg);
    hor = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
    printf ("%d horas, %d minutos, %d segundos.", hor, min, seg);

    return 0;
}