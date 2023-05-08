#include <stdio.h>

//10. Faça um programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

int main() {
    int dia;

    printf("[1] - Domingo\n");
    printf("[2] - Segunda\n");
    printf("[3] - Terca\n");
    printf("[4] - Quarta\n");
    printf("[5] - Quinta\n");
    printf("[6] - Sexta\n");
    printf("[7] - Sabado\n");
    printf("Escolha um dia da semana:");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invalido\n");
            break;
    }

    return 0;
}

