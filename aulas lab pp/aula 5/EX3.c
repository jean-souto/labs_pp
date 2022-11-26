/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/
#include <stdio.h>

void positivo (int a)
{
    if (a > 0)
    {
        printf ("positivo 1");
    }
        else if (a < 0)
        {
            printf ("negativo -1");
        }
        else
        {
            printf ("zero 0");
        }   
    
}

int main ()
{
    int a;

    printf ("Digite um numero: ");
    scanf ("%d", &a);

    positivo (a);

    return 0;
}