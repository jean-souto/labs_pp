/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float salario, emprest;
    
    printf ("Digite o valor do salario e o valor da prestacao: \n");
    scanf ("%f%f", &salario, &emprest);

    if (emprest > (salario * 0.2)) {
        printf ("Emprestimo nao concedido");
    }else{
        printf ("Emprestimo concedido");
    }

    return 0;
}