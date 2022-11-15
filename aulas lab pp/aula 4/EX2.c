/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.*/
#include <stdio.h>
int main ()
{
    int nun;

    printf ("Utilizando o comando for: \n");

    for (nun = 1; nun < 101; nun++)
    {
        printf ("%d ", nun);
    }

    nun = 0;

    printf ("\n\nUtilizando o comando while: \n");
    
    while (nun < 100)
    {
        nun++;

        printf ("%d ", nun);    

    }

    printf ("\n\nUtilizando o comando do-while: \n");

    nun = 0;

    do 
    {
        nun++; 

        printf ("%d ", nun);

    } 
    while (nun < 100);

    return 0;
}