/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 08/07/2026 - 00:25
     * Descrição : 17. Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que:
                       A = (basemaior + basemenor) ∗ altura / 2.
                       Lembre-se a base maior e a base menor devem ser numeros maiores que zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMaior, baseMenor, altura, areaTrapezio;

    printf("Informe a base maior: ");
    scanf("%f", &baseMaior);
    printf("Informe a base menor: ");
    scanf("%f", &baseMenor);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    if (baseMaior <= 0 || baseMenor <= 0 || altura <= 0)
    {
        printf("Valores da base menores ou iguais a zero.");
        return 0;
    }

    areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area do trapezio = %.2f.", areaTrapezio);

    return 0;
}
