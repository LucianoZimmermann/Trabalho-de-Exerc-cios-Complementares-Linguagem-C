#include <stdio.h>

//6. Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou indefinido/outro

//int main (void){
//	
//	printf("Legenda:\n");
//	printf("[M] - Masculino\n");
//	printf("[F] - Feminino\n");
//	printf("[Outro Caracter] - Outro/Indefinido\n");
//	
//	char sexo;
//	printf("Qual seu sexo?");
//	scanf("%c", &sexo);
//	
//	if(sexo == 'm' || sexo == 'M'){
//		printf("Masculino");
//		return 0;
//	}
//	if (sexo == 'f' || sexo == 'F'){
//		printf("Feminino");
//		return 0;
//	}
//		else{
//			printf("Outro/Indefinido");
//		}
//	return 0;	
//}

int main(void) {
    char letra;

    while (1) {
        
        printf("Legenda:\n");
		printf("[M] - Masculino\n");
		printf("[F] - Feminino\n");
		printf("[Outro Caracter] - Outro/Indefinido\n");
		printf("Qual seu sexo?");
        scanf(" %c", &letra);

        if (letra == 'F' || letra == 'f') {
            printf("Feminino\n");
            break;
        } else if (letra == 'M' || letra == 'm') {
            printf("Masculino\n");
            break;
        } else {
            printf("Outro/Indefinido\n");
        }
    }
    return 0;
}
