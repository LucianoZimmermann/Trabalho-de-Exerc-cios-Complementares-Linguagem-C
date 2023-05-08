#include <stdio.h>

//17. Faça um programa que leia um número inteiro e informe se ele é divisível por 2, 3, 5 ou 7, utilizando a estrutura switch-case

int main() {
    int num1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    
    if(num1 % 2 == 0){
		num1 = 2;
	}
	else if(num1 % 3 == 0){
		num1 = 3;
	}
	else if(num1 % 5 == 0){
		num1 = 5;
	}
	else if(num1 % 7 == 0){
		num1 = 7;
	}
	

    switch (num1) {
        case 2:
            printf("O numero %d eh divisivel por 2.\n", num1);
            break;
        case 3:
            printf("O numero %d eh divisivel por 3.\n", num1);
            break;
        case 5:
            printf("O numero %d eh divisivel por 5.\n", num1);
            break;
        case 7:
            printf("O numero %d eh divisivel por 7.\n", num1);
            break;
        default:
            printf("O numero %d nao eh divisivel por 2, 3, 5 ou 7.\n", num1);
            break;
    }

    return 0;
}
