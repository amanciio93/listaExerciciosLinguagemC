/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 17/06/2026 - 21:56
 * Descrição : 42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo- se
                   que esse funcionário tem uma gratifição de 5% sobre o salário-base. Além disso,
                   ele paga 7% de imposto sobre o salário-base.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBase, salarioReceber, gratificacao, imposto;

    printf("Informe o salario base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioReceber = salarioBase + gratificacao - imposto;


    printf("Salario a receber com gratificacao de cinco por cento e sete de imposto sobre o base: %.2f", salarioReceber);

    return 0;
}
