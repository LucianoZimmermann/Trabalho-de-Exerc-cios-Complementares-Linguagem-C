#include <stdio.h>

//9.Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:

//int main(void){
//    float n1, n2, n3, media;
//
//    printf("Digite a primeira nota: ");
//    scanf("%f", &n1);
//
//    printf("Digite a segunda nota: ");
//    scanf("%f", &n2);
//
//    printf("Digite a terceira nota: ");
//    scanf("%f", &n3);
//	
//	media = (n1 + n2 + n3) / 3;
//
//    printf("Media: %.2f\n", media);
//	
//	if (n1 > 10 || n1 < 0 || n2 > 10 || n2 < 0 || n3 > 10 || n3 < 0){
//		printf("Digite um numero valido!");
//		return 0;
//	}
//     else if (media == 10) {
//        printf("Aprovado com Distincao\n");
//    } 
//	else if (media >= 7) {
//        printf("Aprovado\n");
//    } 
//	else {
//        printf("Reprovado\n");
//    }
//
//	return 0;
//}


int main() {
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 10) {
        printf("Nota invalida. Digite novamente:\n ");
        scanf("%f", &n1);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    while (n2 < 0 || n2 > 10) {
        printf("Nota invalida. Digite novamente:\n ");
        scanf("%f", &n2);
    }

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    while (n3 < 0 || n3 > 10) {
        printf("Nota invalida. Digite novamente:\n ");
        scanf("%f", &n3);
    }

    media = (n1 + n2 + n3) / 3;

    printf("Media: %.2f\n", media);

    if (media == 10) {
        printf("Aprovado com Distincao\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

