/*25. Calcule as raízes da equação de 2º grau.
Lembrando que:
𝑥 =
−𝑏 ± √
2𝑎
Onde
 = 𝑏
2 − 4𝑎𝑐
E ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se  < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se  = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se   0, imprima as duas raízes reais.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, x1, x2;
    int delta;
    
    printf ("Digite respectivamente as variaveis a, b e c: \n");
    scanf ("%f%f%f", &a, &b, &c);

    delta = ((b*b) - 4 * (a * c));
    printf ("%d ", delta);

    if (a != 0)
    {
        if (delta > 0)
        {
            x1 = ((-b) + sqrt(delta))/(2*a);
            x2 = ((-b) - sqrt(delta))/(2*a);
            printf ("As raizes sao %.1f e %.1f.", x1, x2);

        }
        else
        {
            if (delta = 0) 
            {
                printf ("Ha somente uma raiz %.1f.", (-b/(2*a)));
            }
            else 
            {
                printf ("Nao ha raizes reais.");
            }
        }
    }
    else
    {
        printf ("Nao eh equacao de segundo grau.");
    }

    return 0;
}