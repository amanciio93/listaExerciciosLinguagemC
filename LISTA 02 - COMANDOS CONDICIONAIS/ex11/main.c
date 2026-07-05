/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 04/07/2026 - 23:30
     * Descrição : 11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
                       soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
                       8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
                       mensagem “Número inválido”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;

    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Numero invalido !");
        return 0;
    }

    // Enquanto ainda existirem algarismos no número...
    while(numero > 0)
    {
        // Pega o último algarismo usando o operador resto (%).
        // Exemplo:
        // 251 % 10 = 1
        // 25 % 10 = 5
        // 2 % 10 = 2
        soma += numero % 10;

        // Remove o último algarismo através da divisão inteira.
        // Exemplo:
        // 251 / 10 = 25
        // 25 / 10 = 2
        // 2 / 10 = 0
        numero /= 10;
    }

    printf("Soma dos algarismos = %d.", soma);


    return 0;
}
