/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 10/07/2026 - 18:40
     * Descrição : 21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
                       Escreva uma mensagem de erro se a opção for inválida.
                       Escolha a opção:
                        1- Soma de 2 números.
                        2- Diferença entre 2 números (maior pelo menor).
                        3- Produto entre 2 números.
                        4- Divisão entre 2 números (o denominador não pode ser zero).
                        Opção:
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float num1, num2;

    printf("############### MENU - Selecione com o numero a opcao que deseja\n\n");
    printf("1 - Somar dois numeros.\n");
    printf("2 - Diferenca entre dois numeros ( MAIOR PELO MENOR )\n");
    printf("3 - Produto entre dois numeros.\n");
    printf("4 - Divisao entre dois numeros ( Denominador nao pode ser zero.)\n");
    printf("OPCAO: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4)
    {
        puts("Opcao informada não valida!");
        return 0;
    }

    printf("\n\nInforme o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao)
    {
        case 1:
            printf("%.2f + %.2f = %.2f.", num1, num2, num1 + num2);
            break;
        case 2:
            if (num1 >= num2)
                printf("%.2f - %.2f = %.2f.", num1, num2, num1 - num2);
            else
                printf("%.2f - %.2f = %.2f.", num2, num1, num2 - num1);
            break;
        case 3:
            printf("%.2f X %.2f = %.2f.", num1, num2, num1 * num2);
            break;
        case 4:
            if(num2 != 0)
                printf("%.2f / %.2f = %.2f.", num1, num2, num1 / num2);
            else
                puts("DENOMINADOR NAO VALIDO!");
            break;
        //default:
            //puts("Numeros invalidos");
            //break;
    }

    return 0;
}
