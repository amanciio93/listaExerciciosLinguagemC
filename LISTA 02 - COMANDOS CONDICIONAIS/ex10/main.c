/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 20:45
     * Descrição : 10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
                       peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
                       • Homens: (72.7 ∗ h) − 58
                       • Mulheres: (62, 1 ∗ h) − 44, 7
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;

    printf("Informe 'm' para MASCULINO ou 'f' para FEMININO: ");
    scanf("%c", &sexo);
    printf("Informe a altura em metros: ");
    scanf("%f", &altura);

    if(sexo == 'm')
        printf("PESO IDEAL: %.2f Kg.", (72.7 * altura) - 58);
    else if (sexo == 'f')
        printf("PESO IDEAL: %.2f Kg.", (62.1 * altura) - 44.7);
    else
        puts("SEXO INVALIDO!");

    return 0;
}
