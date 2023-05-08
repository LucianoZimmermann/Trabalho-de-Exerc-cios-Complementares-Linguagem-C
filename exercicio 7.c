#include <stdio.h>

//7. Faça um programa que verifique se uma letra digitada é vogal ou consoante.

//int main (void){
//	
//	char letra;
//
//	printf("Escolha uma letra e direi se eh uma vogal ou consoante:");
//	scanf("%c", &letra);
//	
//	switch(letra){
//		case 'A':
//		case 'a':
//		case 'E':
//		case 'e':
//		case 'I':
//		case 'i':
//		case 'O':
//		case 'U':
//		case 'u':
//			printf("Sua letra eh vogal!");
//			break;
//		default:
//			printf("Consoante!");
//	}	
//}

int main(void) {
    char letra;

    while (1){
        
        printf("Digite uma letra e direi se eh uma consoante ou uma vogal: ");
        scanf(" %c", &letra);

        if (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u'){
            printf("Vogal!\n");
            break;
        } 
		else {
            printf("Consoante!\n");
            break;
    }
    return 0;
}
}
