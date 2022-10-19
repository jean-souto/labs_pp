/*44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/
#include <stdio.h>
int main () {
    float hdegrau, htotal, qdegrau;
    printf ("Digite a altura do degrau e a altura desejada: \n");
    scanf ("%f%f", &hdegrau, &htotal);
    qdegrau = htotal / hdegrau;
    printf ("A quantidade de degraus necessaria eh de %.0f.", qdegrau);

    return 0;
}