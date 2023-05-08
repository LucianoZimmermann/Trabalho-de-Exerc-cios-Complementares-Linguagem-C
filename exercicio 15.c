#include <stdio.h>

// 15. Faça um programa que leia um número inteiro entre 1 e 12 e mostre o quadrado ou o cubo do número, dependendo se ele é par ou ímpar, utilizando a estrutura switch-case

int main() {
    int num1;
    int quadrado, cubo;

    printf("Digite um numero inteiro entre 1 e 12: ");
    scanf("%d", &num1);

    switch (num1) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            quadrado = num1 * num1;
            printf("O quadrado de %d eh %d.\n", num1, quadrado);
            break;

        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            cubo = num1 * num1 * num1;
            printf("O cubo de %d eh %d.\n", num1, cubo);
            break;

        default:
            printf("Numero invalido! Por favor, digite um número inteiro entre 1 e 12.\n");
            break;
    }

    return 0;
}
