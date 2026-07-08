/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 07/07/2026 - 20:55
     * Descrição : 15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
                       da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
                       assim por diante.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaDaSemana;

    printf("Informe :\n1 - Domingo.\n2 - Segunda.\n3 - Terça.\n4 - Quarta.\n5 - Quinta.\n6 - Sexta.\n7 - Sábado.\n");
    scanf("%d", &diaDaSemana);

    switch(diaDaSemana)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Feira");
            break;
        case 3:
            printf("Terça-Feira");
            break;
        case 4:
            printf("Quarta-Feira");
            break;
        case 5:
            printf("Quinta-Feira");
            break;
        case 6:
            printf("Sexta-Feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Opção inválida!");
    }

    return 0;
}
