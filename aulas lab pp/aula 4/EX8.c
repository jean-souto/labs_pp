/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>
int main() {
    
    int numero, maior, menor;
    int cont = 1;
    
    while (cont <= 10) 
    {
        printf ("Digite um numero: ");
        scanf ("%d", &numero);
       
       if (cont == 1) 
       {
           maior = numero;
           menor = maior;
       }
       else
       { 
            if (numero > maior) 
            {
            maior = numero;
            }
            else
            {   
                if (numero < menor) 
                {
                    menor = numero;
                }
            }
       }
        cont++;
    }
    printf ("Menor numero: %d", menor);
    printf ("\nMaior numero: %d", maior);

    return 0;
}