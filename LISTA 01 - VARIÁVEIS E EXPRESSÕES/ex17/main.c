/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 19:32
 * Descrição : 17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
                   A fórmula de convers˜ao é: P = C / 2.54, sendo C o comprimento em centímetros e P o
                   comprimento em polegadas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, polegadas;

    printf("Informe o comprimento em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("Em polegadas seria: %.2f", polegadas);

    return 0;
}
