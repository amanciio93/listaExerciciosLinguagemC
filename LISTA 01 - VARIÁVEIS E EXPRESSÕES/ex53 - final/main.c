/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 26/06/2026 - 21:05
     * Descrição : 53. Faça um programa para ler as dimens˜ões de um terreno (comprimento c e largura l),
                       bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
                       com tela.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comprimento, largura;
    float perimetro, precoTela, custoTotal;

    printf("Informe o comprimento do terreno: ");
    scanf("%d", &comprimento);
    printf("Informe a largura do terreno: ");
    scanf("%d", &largura);
    printf("Informe o preco da tela: ");
    scanf("%f", &precoTela);

    perimetro = 2 * comprimento + 2 * largura;

    custoTotal = perimetro * precoTela;

    printf("CUSTO TOTAL DE TELA: %.2f;.", custoTotal);

    return 0;
}
