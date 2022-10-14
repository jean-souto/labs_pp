/*18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
cúbicos*/
#include <stdio.h>
int main () {
    float m3, lit;
    printf ("Digite um volume em m3: ");
    scanf ("%f", &m3);
    lit = 1000*m3;
    printf ("O volume em litros eh de: %0.2f", lit);



    return 0;
}