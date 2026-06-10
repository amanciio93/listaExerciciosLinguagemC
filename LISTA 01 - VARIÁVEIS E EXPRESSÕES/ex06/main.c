/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 17:02
 * Descrição : 6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
                  A fórmula de convers˜ao é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
                  e C a temperatura em Celsius.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * ( 9.0 / 5.0 ) + 32.0;

    printf("A temperatura convertida para Fahrenheit fica: %.2f F.", fahrenheit);

    return 0;
}
