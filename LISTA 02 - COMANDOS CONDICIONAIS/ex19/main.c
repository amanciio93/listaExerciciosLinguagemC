/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 08/07/2026 - 19:00
     * Descrição : 19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
                       5, mas n˜ão simultaneamente pelos dois.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Necessário para usar bool, true e false;

int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    bool divisivel3 = (numero % 3 == 0);
    bool divisivel5 = (numero % 5 == 0);

    if (divisivel3 && divisivel5)
    {
        printf("Nao atende ao requisito, pois e divisivel por 3 e por 5.");
        return 0;
    }
    else if (divisivel3)
        printf("Divisivel por tres");
    else if (divisivel5)
        printf("Divisivel por 5");
    else
        printf("Nao divisivel nem por tres e nem por cinco.");

    return 0;
}
