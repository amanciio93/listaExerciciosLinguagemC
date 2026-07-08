/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 08/07/2026 - 00:25
     * Descrição : 16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
                       correspondente a este numero. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDoMes;

    printf("Informe :\n1 - Janeiro.\n2 - Fevereiro.\n3 - Março.\n4 - Abril.\n5 - Maio.\n6 - Junho.\n7 - Julho.\n8 - Agosto.\n9 - Setembro.\n10 - Outubro.\n");
    printf("11 - Novembro.\n12 - Dezembro.\n");
    scanf("%d", &numeroDoMes);

    switch(numeroDoMes)
    {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Março");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Opção inválida!");
    }

    return 0;
}
