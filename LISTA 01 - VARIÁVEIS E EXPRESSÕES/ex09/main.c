/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 17:20
 * Descrição : 9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
                  fórmula de convers˜ao é: K = C + 273.15, sendo C a temperatura em Celsius e K a
                  temperatura em Kelvin.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, kelvin;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("A temperatura convertida para Kelvin fica: %.2f F.", kelvin);

    return 0;
}
