/*30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares*/
#include <stdio.h>
int main () {
    float real, dol, dolar;
    printf ("Digite o valor para conversao (reais): \n");
    scanf ("%f", &real);
    printf ("Digite a cotacao atual do dolar: \n");
    scanf ("%f", &dol);
    dolar = real/dol;
    printf ("Apos convertido, voce tera %.2f dolares.", dolar);

    return 0;
}