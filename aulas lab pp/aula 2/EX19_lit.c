/*19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
cúbicos.*/
#include <stdio.h>
int main () {
    float m3, lit;
    printf ("Digite um volume em litros: ");
    scanf ("%f", &lit);
    m3 = lit/1000;
    printf ("O volume em metros cubicos eh de: %0.2f", m3);



    return 0;
}