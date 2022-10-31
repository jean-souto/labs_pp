/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.*/
#include <stdio.h>
#define atual 2022
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
                if (dia >= 1 && dia <= 31 && ano <= atual)
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
                
                if (ano <= atual)
                {
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
                }
                else
                {
                    printf ("Data invalida.");
                }

            break;

            case 3 : // marco
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 4 : // abril
                if (dia >= 1 && dia <= 30 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 5 : // maio
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 6 : // junho
                if (dia >= 1 && dia <= 30 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 7 : // julho
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 8 : // agosto
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 9 : // setembro
                if (dia >= 1 && dia <= 30 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 10 : // outubro
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 11 : // novembro
                if (dia >= 1 && dia <= 30 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;

            case 12 : // dezembro
                if (dia >= 1 && dia <= 31 && ano <= atual)
                {
                    printf ("A data eh valida! %d/%d/%d", dia, mes, ano);
                }
                else
                {
                    printf ("Data invalida.");
                }
            break;
        
            default :
                
                printf ("Data invalida.");
        
            break;
        }

        printf ("\nVoce quer tentar uma nova data? \n\n1. Sim \n\n0.Nao\n");
        scanf ("%d", &a);

    }

    return 0;
}