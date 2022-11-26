/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
resultado de x
z para o programa principal. Atenção não utilize nenhuma função pronta de
exponenciação.*/
#include <stdio.h>

int exponencial (int x, int z);

int main ()
{
    int x, y;

    printf ("digite o valor da base e do expoente: ");
    scanf ("%d%d", &x, &y);

    printf ("O resultado eh %d", exponencial (x, y));
    
    return 0;
}

int exponencial (int x, int z)
{
    int resultado = 0, i;

    if (z == 0)
    {
        return 1;
    }
   
    if (z == 1)
    {
        return x;
    }
   
    if (z == 2)
    {
        return x*x;
    }
    
    if (z > 2)
    {
        resultado = x*x;
        
        for (i = 2; i < z; i++)
        {
            resultado = resultado*x;
        }

        return resultado;
    }
}   