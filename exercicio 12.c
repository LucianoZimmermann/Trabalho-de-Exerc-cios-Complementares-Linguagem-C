#include <stdio.h>

// 12. Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.

int main (void){
	int num1, num2, escolha;
	
	printf("[1] - Adicao\n");
	printf("[2] - Substracao\n");
	printf("[3] - Divisao\n");
	printf("[4] - Multiplicacao\n");
	printf("[5] - Fim\n");
	
	printf("Escolha a operacao:");
	scanf("%i", &escolha);
	
	if (escolha == 5) {
	    printf("Saindo!\n");
	    return 0;
	}
	
	printf("Primeiro numero:");
	scanf("%i", &num1);
	printf("Segundo numero:");
	scanf("%i", &num2);
	
	switch(escolha){
		case 1:
			escolha = num1 + num2;
			printf("Resultado:%i", escolha);
			break;
		case 2:
			escolha = num1 - num2;
			printf("Resultado:%i", escolha);
			break;
		case 3:
			escolha = num1 / num2;
			printf("Resultado:%i", escolha);
			break;
		case 4:
			escolha = num1 * num2;
			printf("Resultado:%i", escolha);
			break;
		default:
			printf("Operação Invalida!");
	}
	return 0;
}
