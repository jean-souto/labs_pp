/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int nun;
    
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &nun);

    if (nun >= 0) 
    {
        printf ("O logaritmo de base 10 do numero eh %.2f.", log10(nun));
    }
    else
    {
        printf ("Numero invalido.");
    }

    return 0;
}