/*
     * Arquivo   : main.c
     * Autor     : Jonathan Amancio Vieira Coelho da Silva
     * Data      : 02/07/2026 - 20:25
     * Descrição : 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
                      exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
                      valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
                      informado ao usuário e o programa termina.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
        printf("Media de: %.2f.", (nota1 + nota2) / 2);
    else
        printf("Notas invalidas!");

    return 0;
}
