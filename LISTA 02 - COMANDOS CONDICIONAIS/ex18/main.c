/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 08/07/2026 - 00:59
     * Descrição : 18. Faça um programa que mostre ao usuario um menu com 4 opções de operações matemáticas
                       (as básicas, por exemplo). O usuario escolhe uma das opções e o seu programa
                       ent˜ão pede dois valores numéricos e realiza a operação, mostrando o resultado e
                       saindo.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacao;
    float numeroUm, numeroDois;

    printf("############   ESCOLHA E INFORME A OPCAO DESEJADA   ############");
    printf("\n1 - SOMA.");
    printf("\n2 - SUBTRACAO.");
    printf("\n3 - DIVISAO.");
    printf("\n4 - MULTIPLICACAO.\n");
    printf("################################################################\n\n");
    scanf("%d", &operacao);

    if(operacao <=0 || operacao >= 5)
    {
        puts("OPCAO INVALIDA!!!");
        return 0;
    }

    printf("Informe o primeiro numero para operacao: ");
    scanf("%f", &numeroUm);
    printf("Informe o segundo numero para operacao: ");
    scanf("%f", &numeroDois);

    switch (operacao)
    {
        case 1:
            printf(" %.2f + %.2f = %.2f.", numeroUm, numeroDois, numeroUm + numeroDois);
            break;
        case 2:
            printf(" %.2f - %.2f = %.2f.", numeroUm, numeroDois, numeroUm - numeroDois);
            break;
        case 3:
            if(numeroDois == 0)
                puts("IMPOSSIVEL DIVISAO POR ZERO!!!");
            else
                printf(" %.2f / %.2f = %.2f.", numeroUm, numeroDois, numeroUm / numeroDois);
            break;
        case 4:
            printf(" %.2f * %.2f = %.2f.", numeroUm, numeroDois, numeroUm * numeroDois);
            break;
        default:
            printf("\n\t\tVerifique os valores informados!");
            break;
    }

    return 0;
}
