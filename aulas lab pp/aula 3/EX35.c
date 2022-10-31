/*35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.*/
#include <stdio.h>
int main ()
{
    int dia, mes, ano, a = 1, div4, div100, div400;

    while (a)
    {

        printf ("Digite a data (dd mm aaaa): ");
        scanf ("%d%d%d", &dia, &mes, &ano);

        switch (mes)
        {
            case 1 : // janeiro
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 2 : // fevereiro: anos bi sao o problema

                div4 = ano % 4;
                div100 = ano % 100;
                div400 = ano % 400;
                
                if (div4 == 0) 
                {
                    if (div100 == 0) 
                    {
                        if (div400 == 0) 
                        {
                            if (dia >= 1 && dia <= 29) // 29 dias
                            {
                                printf ("A data eh valida e o ano bissexto! %d/%d/%d", dia, mes, ano);
                            }
                            else
                            {
                                printf ("Data invalida.");
                            }
                        }
                        else
                        {
                            if (dia >= 1 && dia <= 28) // 28 dias
                            {
                                printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                            }
                            else
                            {
                                printf ("Data invalida.");
                            }
                        }
                    }
                    else
                    {
                        if (dia >= 1 && dia <= 29) // 29 dias
                            {
                                printf ("A data eh valida e o ano bissexto! %d/%d/%d", dia, mes, ano);
                            }
                            else
                            {
                                printf ("Data invalida.");
                            }
                    }
                }
                else
                {
                     if (dia >= 1 && dia <= 28) // 28 dias
                            {
                                printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                            }
                            else
                            {
                                printf ("Data invalida.");
                            }
                }

            break;

            case 3 : // marco
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 4 : // abril
                if (dia >= 1 && dia <= 30)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 5 : // maio
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 6 : // junho
                if (dia >= 1 && dia <= 30)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 7 : // julho
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 8 : // agosto
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 9 : // setembro
                if (dia >= 1 && dia <= 30)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 10 : // outubro
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 11 : // novembro
                if (dia >= 1 && dia <= 30)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 12 : // dezembro
                if (dia >= 1 && dia <= 31)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;
        
            default :
                
                printf ("Data invalida! Digite um mes existente.");
        
            break;
        }

        printf ("\nVoce quer tentar uma nova data? \n\n1. Sim \n\n0.Nao\n");
        scanf ("%d", &a);

    }

    return 0;
}