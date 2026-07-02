/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 19:15
     * Descrição : 5. Faça um programa que receba um número inteiro e verifique se este número é par ou
                      ı́mpar.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("%d NUMERO PAR!!!", numero);
    else
        printf("%d NUMERO IMPAR!!!", numero);

    return 0;
}
