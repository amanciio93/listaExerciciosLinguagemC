/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 17:14
 * Descrição : 8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
                  fórmula de convers˜ao é: C = K − 273.15, sendo C a temperatura em Celsius e K a
                  temperatura em Kelvin.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kelvin, celsius;

    printf("Informe a temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("A temperatura convertida para Celsius fica: %.2f F.", celsius);

    return 0;
}
