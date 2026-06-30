/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 30/06/2026 - 16:15
     * Descrição : 1. Faça um programa que receba dois números e mostre qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUm, numeroDois;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numeroUm);
    printf("Informe o segundo numero: ");
    scanf("%d", &numeroDois);

    if (numeroUm > numeroDois)
        printf("O primeiro numero ( %d ) e maior que o segundo ( %d ).", numeroUm, numeroDois);
    else
        printf("O segundo numero ( %d ) e maior que o primeiro ( %d ).", numeroDois, numeroUm);


    return 0;
}
