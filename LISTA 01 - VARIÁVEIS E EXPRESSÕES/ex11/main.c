/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 18:41
 * Descrição : 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
                   (quilômetros por hora). A fórmula de convers˜ao é: K = M ∗3.6, sendo K a velocidade
                   em km/h e M em m/s.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mtSegundo, kmHora;

    printf("Informe a velocidade em MT/S: ");
    scanf("%f", &mtSegundo);

    kmHora = mtSegundo * 3.6;

    printf("Valor equivalente a %.2f KM/H.", kmHora);

    return 0;
}
