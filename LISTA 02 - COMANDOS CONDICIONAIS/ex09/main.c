/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 20:40
     * Descrição : 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
                      prestação for maior que 20% do salário imprima: Empréstimo no concedido, caso
                      contrário imprima: Empréstimo concedido.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, parcela;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);
    printf("Informe o valor da parcela: ");
    scanf("%f", &parcela);

    if(parcela > salario * 0.20)
        printf("Emprestimo negado.");
    else
        printf("Emprestimo concedido.");

    return 0;
}
