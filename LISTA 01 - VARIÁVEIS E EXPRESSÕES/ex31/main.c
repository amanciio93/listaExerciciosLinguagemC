/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 00:53
 * Descrição : 31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um umero inteiro: ");
    scanf("%d", &num);

    printf("O antecessor de %d e %d e seu sucessor e %d.", num, num - 1, num + 1);

    return 0;
}
