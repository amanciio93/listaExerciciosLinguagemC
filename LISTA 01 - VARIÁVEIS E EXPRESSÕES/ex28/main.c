/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 11/06/2026 - 19:28
 * Descrição : 28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
                   três valores lidos.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, somaQuadrados;

    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);

    printf("Informe o segundo valor: ");
    scanf("%f", &num2);

    printf("Informe o terceiro valor: ");
    scanf("%f", &num3);

    somaQuadrados = (num1 * num1) + (num2 * num2) + (num3 * num3);

    printf("A soma dos quadrados resulta em: %.2f.", somaQuadrados);

    return 0;
}
