/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 23/06/2026 - 20:00
     * Descrição : 50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
                       sua idade e do ano atual.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoAtual;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Nascido no ano: %d.", anoAtual - idade);

    return 0;
}
