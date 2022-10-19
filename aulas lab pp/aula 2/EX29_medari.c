/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/
#include <stdio.h>
int main () {
    float n1, n2, n3, n4, med;
    printf ("Digite as notas para o calculo da media aritmetica: \n");
    scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);
    med = (n1 + n2 + n3 + n4)/4;
    printf ("A media das notas eh de %.2f.", med);


    return 0;
}