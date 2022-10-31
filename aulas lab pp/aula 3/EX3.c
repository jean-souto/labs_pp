/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado.*/
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
        printf ("O numero ao quadrado eh %.0f", pow (nun, 2));
    }

    return 0;
}