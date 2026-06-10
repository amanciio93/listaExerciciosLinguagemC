/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 09/06/2026 - 20:33
 * Descrição : 2. Faça um programa que leia um número real e o imprima.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Informe um numero real qualquer: ");
    scanf("%f", &num);

    printf("O numero informado foi: %f.\n", num);
    return 0;
}
