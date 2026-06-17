/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 20:45
 * Descrição : 38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
                   ele recebeu um aumento de 25%.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioAtual, aumento = 0.25, novoSalario;

    printf("Informe o salario atual: ");
    scanf("%f", &salarioAtual);

    novoSalario = salarioAtual + (salarioAtual * aumento);

    printf("O novo salario com 25 por cento de aumento e: %.2f.", novoSalario);
    return 0;
}
