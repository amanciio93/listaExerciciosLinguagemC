/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 09/06/2026 - 20:30
 * Descrição : 1. Faça um programa que leia um número inteiro e o imprima na tela.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &num);

    printf("O numero informado foi: %d.\n", num);
    return 0;
}
