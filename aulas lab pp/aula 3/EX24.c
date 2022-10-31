/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.*/
#include <stdio.h> 
int main ()
{
    float prod, final;
    char estado;

    printf ("Digite o valor do produto: ");
    scanf ("%f", &prod);

    printf ("Digite um estado de destino (1, 2, 3 ou 4): \n1. Minas Gerais (MG) \n2. Sao Paulo (SP) \n3. Rio de Janeiro (RJ) \n4. Mato Grosso do Sul (MS) \n");
    scanf (" %c", &estado);

    switch (estado)
    {
        case '1' :
            printf ("O estado escolhido foi MG. O preco final do produto sera de %.2f.", prod*1.07);
        break;

        case '2' :
            printf ("O estado escolhido foi SP. O preco final do produto sera de %.2f.", prod*1.12);
        break;

        case '3' :
            printf ("O estado escolhido foi RJ. O preco final do produto sera de %.2f.", prod*1.15);
        break;

        case '4' :
            printf ("O estado escolhido foi MS. O preco final do produto sera de %.2f.", prod*1.08);
        break;

        default :
            printf ("O estado digitado nao eh valido!");
        break;

    }

    return 0;
}