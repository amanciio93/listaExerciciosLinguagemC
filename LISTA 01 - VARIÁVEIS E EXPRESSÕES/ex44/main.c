/*
 * Arquivo   : main.c
 * Autor     : Jonathan Amancio
 * Data      : 18/06/2026 - 18:51
 * Descrição : 44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
                   subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
                   seu objetivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaDegrau, alturaASubir, qtdDegraus;

    printf("Informe a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Informe a altura que deseja subir: ");
    scanf("%f", &alturaASubir);

    qtdDegraus = alturaASubir / alturaDegrau;

    printf("Deverá subir aproximadamente %.2f degraus", qtdDegraus);

    return 0;
}
