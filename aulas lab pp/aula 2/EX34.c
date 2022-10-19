/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
área do círculo é *raio2, considere  = 3.141592.*/
#include <stdio.h>
#define PI 3.141592
int main () {
    float raio, area;
    printf ("Digite o valor do raio do circulo: \n");
    scanf ("%f", &raio);
    area = (PI * (raio*raio));
    printf ("A area eh de %.3f.", area);

    return 0;
}