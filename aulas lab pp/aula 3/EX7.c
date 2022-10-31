/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int A, B;
    
    printf ("Digite dois numeros: \n");
    scanf ("%d%d", &A, &B);

    if (A > B) {
        
        printf ("O numero eh %d eh maior.", A);
    
    }else{
    
        if (B > A) {
    
            printf ("O numero eh %d eh maior.", B);
    
        }else{

            printf ("Os numeros sao iguais.");

        }
    }

    return 0;
}