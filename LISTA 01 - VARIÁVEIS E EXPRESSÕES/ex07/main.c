/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 17:10
 * Descrição : 7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
                  A fórmula de convers˜ao é: C = 5.0 ∗(F −32.0)/9.0, sendo C a temperatura em Celsius
                  e F a temperatura em Fahrenheit.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius;

    printf("Informe a temperatura em graus fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * ( fahrenheit - 32.0 ) / 9.0;

    printf("A temperatura convertida para Celsius fica: %.2f F.", celsius);

    return 0;
}
