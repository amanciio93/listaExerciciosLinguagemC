/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 17/06/2026 - 21:56
 * Descrição : 41. Faça um programa que leia o valor da hora de trabalho
 *             (em reais) e número de horas trabalhadas no mês. Imprima
 *             o valor a ser pago ao funcionário, adicionando 10% sobre
 *             o valor calculado.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vlrHrTrab, qtdHr, totalPagar;

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &vlrHrTrab);

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &qtdHr);

    totalPagar = (vlrHrTrab * qtdHr) * 1.10;

    printf("O total a pagar ao funcionario com acrescimo de 10%% sera de: R$ %.2f\n", totalPagar);

    return 0;
}
