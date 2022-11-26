/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...*/
#include <stdio.h>
#include <math.h>

int quadrado (int nun);

int main ()
{
    int nun;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    if (nun < 0)
    {
        printf ("numero invalido");
    }
        else if (quadrado (nun) == 1)
        {
            printf ("\n%d eh quadrado perfeito", nun);
        }
        else
        {
            printf ("\n%d nao eh quadrado perfeito", nun);
        } 
        
    return 0;
}

int quadrado (int nun)
{
    int a, b, c;

    a = (int) sqrt (nun);
    b = a*a;

    if ((a*a == nun) && (nun*nun == b*b))
    {
        c = 1;
    }
    else
    {
        c = 0;
    }
    
    return c;
}