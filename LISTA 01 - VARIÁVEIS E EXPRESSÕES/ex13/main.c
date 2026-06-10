/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 18:54
 * Descrição : 13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
                   convers˜ao é: M = K / 1.61, sendo K a distância em quilômetros e M em milhas.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kms, milhas;

    printf("Informe a distancia em quilometros: ");
    scanf("%f", &kms);

    milhas = kms / 1.61;

    printf("Convertida para milhas fica: %.2f.\n\n", milhas);

    return 0;
}
