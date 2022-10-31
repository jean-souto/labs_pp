/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int A, B;
    
    printf ("Digite dois numeros: \n");
    scanf ("%d%d", &A, &B);

    if (A > B) {
        printf ("O numero eh %d eh maior. A diferenca entre eles eh de %d.", A, A-B);
    }else{
        printf ("O numero eh %d eh maior. A diferenca entre eles eh de %d.", B, B-A);
    }

    return 0;
}