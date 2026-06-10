/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 19:32
 * Descrição : 16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
                   A fórmula de convers˜ao é: C = P ∗ 2.54, sendo C o comprimento em centímetros e P o
                   comprimento em polegadas.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float polegadas, centimetros;

    printf("Informe o comprimento em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("Em centimetros seria: %.2f", centimetros);

    return 0;
}
