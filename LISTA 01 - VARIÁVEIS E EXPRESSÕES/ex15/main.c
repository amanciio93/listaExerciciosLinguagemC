/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 10/06/2026 - 18:54
 * Descrição : 15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de convers˜ao
                   é: G = R ∗ 180 / π, sendo G o ângulo em graus e R em radianos e π = 3.14.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anguloRadianos, graus;

    printf("Informe o angulo em radianos: ");
    scanf("%f", &anguloRadianos);

    graus = anguloRadianos * 180 / 3.14;

    printf("Convertido em Graus: %.2f.", graus);

    return 0;
}
