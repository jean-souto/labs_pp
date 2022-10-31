/*34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/
#include <stdio.h>
int main ()
{
    float nota;
    int faltas;

    printf ("Digite sua nota (0.0 ate 10.0): ");
    scanf ("%f", &nota);

    printf ("Digite seu numero de faltas: ");
    scanf ("%d", &faltas);

    // condicionamento das faltas em um if else e depois uma arvore dentro pra condicionar as notas

    if (faltas <= 20) // if 1.1
    {
        if (nota >= 0.0 && nota <= 3.9) // if 1.2
        {
            printf ("Seu conceito eh E.");
        }
        else // else 1.2
        {
            if (nota >= 4.0 && nota <= 4.9) // if 2.2
            {
                printf ("Seu conceito eh D.");
            }
            else // else 2.2
            {
                if (nota >= 5.0 && nota <= 7.4) // if 3.2
                {
                    printf ("Seu conceito eh C.");
                }
                else // else 3.2
                {
                    if (nota >= 7.5 && nota <= 8.9) // if 4.2
                    {
                        printf ("Seu conceito eh B!");
                    }
                    else // else 4.2
                    {
                        if (nota >= 9.0 && nota <= 10.0) // if 5.2
                        {
                            printf ("Seu conceito eh A!");
                        }
                        else // else 5.2
                        {
                            printf ("Nota invalida!");
                        }
                    }
                }
            }
        }
    }
    else // else 2.1
    {
        if (nota >= 0.0 && nota <= 3.9) // if 1.3
        {
            printf ("Seu conceito eh E.");
        }
        else // else 1.3
        {
            if (nota >= 4.0 && nota <= 4.9) // if 2.3
            {
                printf ("Seu conceito eh E.");
            }
            else // else 2.3
            {
                if (nota >= 5.0 && nota <= 7.4) // if 3.3
                {
                    printf ("Seu conceito eh D.");
                }
                else // else 3.3
                {
                    if (nota >= 7.5 && nota <= 8.9) // if 4.3
                    {
                        printf ("Seu conceito eh C.");
                    }
                    else // else 4.3
                    {
                        if (nota >= 9.0 && nota <= 10.0) // if 5.3
                        {
                            printf ("Seu conceito eh B!");
                        }
                        else // else 5.3
                        {
                            printf ("Nota invalida!");
                        }
                    }
                }
            }
        }
    }

    return 0;
}