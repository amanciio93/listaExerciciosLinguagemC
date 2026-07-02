/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 18:30
     * Descrição : 4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
                        • O número digitado ao quadrado
                        • A raiz quadrada do número digitado
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    if(numero >= 0)
        printf("\t* %.2f ao quadrado = %.2f. \n\t* Raiz quadrada de %.2f = %.2f.", numero, numero * numero, numero, sqrt(numero));
    else
        printf("Numero invalido.");

    return 0;
}
