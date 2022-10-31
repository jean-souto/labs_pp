/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float nun;
    
    printf ("Digite um numero: \n");
    scanf ("%f", &nun);

    if (nun >= 0) {
        printf ("A raiz quadrada do numero eh %.0f.", sqrt(nun));
    }else{ 
        printf ("O numero eh invalido.");
    }

    return 0;
}