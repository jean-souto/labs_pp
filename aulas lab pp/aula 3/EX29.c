/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
    int a, b;
    int res1, res2, res3, res4, res5, res, certo, cert1, cert2, cert3, cert4, cert5, cert = 0, controle = 0, vf1, vf2, vf3, vf4, vf5, correto1, correto2, correto3, correto4, correto5, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10;
    char novamente;

    while (controle < 5)
    {
        ++controle;
        
        printf ("Questao numero %d:", controle);
        
        srand (time(NULL));
        a = rand() % 100;
        b = rand() % 100;

        printf (" Qual a soma de %d + %d? ", a, b);
        scanf ("%d", &res);

        certo = a + b;

        if (certo == res)
        {
            cert = 1;
        }
        else
        {
            cert = 0;
        }

        if (controle == 1)
        {
            res1 = res;
            cert1 = cert;
            correto1 = certo;
            var1 = a;
            var2 = b;
        }
        else
        {
            if (controle == 2)
            {
                res2 = res;
                cert2 = cert;
                correto2 = certo;
                var3 = a;
                var4 = b;
            }
            else
            {
                if (controle == 3)
                {
                    res3 = res;
                    cert3 = cert;
                    correto3 = certo;
                    var5 = a;
                    var6 = b;                
                }
                else
                {
                    if (controle == 4)
                    {
                        res4 = res;
                        cert4 = cert;
                        correto4 = certo;
                        var7 = a;
                        var8 = b;
                    }
                    else
                    {
                        if (controle == 5)
                        {
                            res5 = res;
                            cert5 = cert;
                            correto5 = certo;
                            var9 = a;
                            var10 = b;
                        }
                    }
                }
            }
        }
    }

    if (cert1 == 1)
    {
        vf1 = 'V';
    }
    else
    {
        vf1 = 'F';
    }

    if (cert2 == 1)
    {
        vf2 = 'V';
    }
    else
    {
        vf2 = 'F';
    }

    if (cert3 == 1)
    {
        vf3 = 'V';
    }
    else
    {
        vf3 = 'F';
    }

    if (cert4 == 1)
    {
        vf4 = 'V';
    }
    else
    {
        vf4 = 'F';
    }

    if (cert5 == 1)
    {
        vf5 = 'V';
    }
    else
    {
        vf5 = 'F';
    }

    printf ("\nV = certo \nF = errado");
    printf ("\n\nOs resultados sao: \n\n1. A soma entre %d e %d: \nVoce respondeu: %d. \nEsta: %c \nA resposta correta eh: %d \n\n2. A soma entre %d e %d: \nVoce respondeu: %d \nEsta: %c \nA resposta correta eh: %d \n\n3. A soma entre %d e %d: \nVoce respondeu: %d \nEsta: %c \nA resposta correta eh: %d", var1, var2, res1, vf1, correto1, var3, var4, res2, vf2, correto2, var5, var6, res3, vf3, correto3);
    printf ("\n\n4. A soma entre %d e %d: \nVoce respondeu: %d \nEsta: %c \nA resposta correta eh: %d \n\n5. A soma entre %d e %d: \nVoce respondeu: %d \nEsta: %c \nA resposta correta eh: %d", var7, var8, res4, vf4, correto4, var9, var10, res5, vf5, correto5);
    printf ("\n\nVoce acertou %d!", (cert1+cert2+cert3+cert4+cert5));

}