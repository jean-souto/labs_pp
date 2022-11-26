/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (
9,0
5,0
) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>

float temperatura (float cel);

int main ()
{
    float cel;

    printf ("Digite a temperatura em celsius: ");
    scanf ("%f", &cel);

    printf ("A temperatura em fahrenheit eh %.2f.", temperatura (cel));

    return 0;
}

float temperatura (float cel)
{
    float far;
    
    far = (cel * (9/5)) + 32;

    return far;
}