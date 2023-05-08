#include <stdio.h>

//4.Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota.

//int main(void){
	
//	int quantNotas=1;
//	float nota, somaNotas, media;
//	char sair='s';
//	
//	while (sair == 's'){
//		printf("Digite uma nota:\n");
//		scanf("%f", &nota);
//		fflush(stdin);
//	
//		if (nota < 0 || nota > 10){
//			printf("Erro!");
//			break;
//		}	
//		
//		somaNotas+= nota;
//		media = somaNotas / quantNotas;
//		
//		printf("Quantidade de notas: %i\n Media: %.2f\n", quantNotas, media);
//		quantNotas++;
//		printf("Deseja continuar 's' ou 'n': ");
//		scanf("%c", &sair);
//	}
//return 0;
//}

#include <stdio.h>

int main(void) {
    int quantNotas = 0;
    float nota, media, somaNotas = 0;

    for (;;) { 
        printf("Digite uma nota: ");
        scanf("%f", &nota);

        if (nota < 0 || nota >10) { 
			printf("Erro!\n");
            break;
        }

        somaNotas += nota;
        quantNotas++;

        media = somaNotas / quantNotas;
        printf("Media: %.2f\n", media);
    }

    return 0;
}
