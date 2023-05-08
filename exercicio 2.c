#include <math.h>
#include <stdio.h>

//2.Faça um programa que peça dois números inteiros e gere os números pares que estão no intervalo entre eles. While e For

//int main (void){

	//int num1=0, num2=0;

//	printf("Digite o primeiro numero: ");
//	scanf("%i", &num1);
//	printf("Digite o segundo numero: ");
//	scanf("%i", &num2);
	
//	if(num1<num2){
//		num1++;
//		for(num1; num1<num2; num1++){
//		if(num1 % 2 == 0){
//		printf("%i, ", num1);
//		}
//		}
//	}
//	else{
//		num1--;
//		for(num1; num1>num2; num1--){
//		if(num1 % 2 == 0){
//		printf("%i, ", num1);
//		}
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Numeros pares no intervalo de %d a %d:\n", num1, num2);

    int i = num1;
    while (i <= num2) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
