/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 17:22
 * Descrição : 10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
                   (metros por segundo). A fórmula de convers˜ao é: M = K/3.6, sendo K a velocidade em
                   km/h e M em m/s.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmHora, mtSegundo;

    printf("Informe a velocidade em KM/H: ");
    scanf("%f", &kmHora);

    mtSegundo = kmHora / 3.6;

    printf("Valor equivalente a %.2f MT/S.", mtSegundo);

    return 0;
}
