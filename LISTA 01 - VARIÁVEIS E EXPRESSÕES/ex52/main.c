/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio
     * Data      : 26/06/2026 - 21:00
     * Descrição : 52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro
                       porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
                       que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
                       ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vlrPremio, pessoaUm, pessoaDois, pessoaTres, totalInvestido;
    float ganhoUm, ganhoDois, ganhoTres;

    printf("Informe o valor total do premio: ");
    scanf("%f", &vlrPremio);

    printf("Informe o investimento da primeira pessoa: ");
    scanf("%f", &pessoaUm);

    printf("Informe o investimento da segunda pessoa: ");
    scanf("%f", &pessoaDois);

    printf("Informe o investimento da terceira pessoa: ");
    scanf("%f", &pessoaTres);

    totalInvestido = pessoaUm + pessoaDois + pessoaTres;

    ganhoUm = (pessoaUm / totalInvestido) * vlrPremio;
    ganhoDois = (pessoaDois / totalInvestido) * vlrPremio;
    ganhoTres = (pessoaTres / totalInvestido) * vlrPremio;

    printf("\n\tPrimeira pessoa recebe: %.2f.", ganhoUm);
    printf("\n\t\tSegunda pessoa recebe: %.2f.", ganhoDois);
    printf("\n\t\t\tTerceira pessoa recebe: %.2f.", ganhoTres);

    return 0;
}
