/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 18:47
 * Descrição : 12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
                   convers˜ao é: K = 1.61 ∗ M, sendo K a distância em quilômetros e M em milhas.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, kms;

    printf("Informe a distancia em milhas: ");
    scanf("%f", &milhas);

    kms = 1.61 * milhas;

    printf("Convertida para quilometros fica: %.2f.\n\n", kms);

    return 0;
}
