/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 16/06/2026 - 20:04
 * Descrição : 35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equaçao:
                   hipotenusa = √a² + b². Faça um programa que receba os valores de a e b e calcule
                   o valor da hipotenusa através da equaç˜ao. Imprima o resultado dessa operaçao.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Neste exercício usaremos a biblioteca math.h que tem a função de calculo de rais quadrada já pronta.
                  // Uma frase que se deve guardar é que... Não há necessidade de reinventar a roda!

int main()
{
    float pontoA, pontoB, hipotenusa;

    printf("Informe o ponto A: ");
    scanf("%f", &pontoA);
    printf("Informe o ponto B: ");
    scanf("%f", &pontoB);

    hipotenusa = sqrt( pow(pontoA, 2) + pow(pontoB, 2) );

    printf("Resultado hipotenusa: %.2f.", hipotenusa);

    return 0;
}
