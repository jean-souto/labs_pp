/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área*/
#include <stdio.h>
int main () {
    float lat, area;
    printf ("Digite o valor da lateral do quadrado: \n");
    scanf ("%f", &lat);
    area = lat*lat;
    printf ("A area do quadrado eh de %.2f.", area);

    return 0;
}