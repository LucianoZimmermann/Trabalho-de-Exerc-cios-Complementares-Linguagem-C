#include <stdio.h>

//11. Fa�a um programa que pergunte em que turno voc� estuda. Pe�a para digitar M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inv�lido!, conforme o caso

int main (void){
	char turno;
	printf("----------------\n");
	printf("[M] - Matutino\n");
	printf("[V] - Vespertino\n");
	printf("[N] - Noturno\n");
	scanf("%c", &turno);
	
	switch(turno){
		
		case 'M':
		case 'm':
			printf("Bom dia!\n");
		break;	
		
		case 'V':
		case 'v':
			printf("Boa tarde!\n");
		break;
		
		case 'N':
		case 'n':
			printf("Boa noite!\n");	
		break;
		
		default:
		printf("ERRO!");	
	}
	return 0;
}
