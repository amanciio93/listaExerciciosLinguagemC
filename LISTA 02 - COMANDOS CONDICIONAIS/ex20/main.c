/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 10/07/2026 - 18:10
     * Descrição : 20. Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
                       e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:
                            • Ocomprimento de cada lado de um triângulo é menor do que a soma dos outros
                            dois lados.
                            • Chama-se equilátero o triângulo que tem três lados iguais.
                            • Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
                            • Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ladoA, ladoB, ladoC;

    printf("Informe o valor 1: ");
    scanf("%d", &ladoA);
    printf("Informe o valor 2: ");
    scanf("%d", &ladoB);
    printf("Informe o valor 3: ");
    scanf("%d", &ladoC);

    if (ladoA <= 0 || ladoB <= 0 || ladoC <= 0 ||ladoA >= (ladoB + ladoC) || ladoB >= (ladoA + ladoC) || ladoC >= (ladoA + ladoB))
        puts("Com esses valores é impossível formar um triângulo.");
    else if (ladoA == ladoB && ladoB == ladoC)
        puts("Esses valores formam um triângulo equilatero.");
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        puts("Esses valores formam um triângulo isóceles.");
    else
        puts("Esses valores formam um triângulo escaleno.");

    return 0;
}
