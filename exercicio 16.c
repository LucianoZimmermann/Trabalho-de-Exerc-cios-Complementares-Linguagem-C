#include <stdio.h>

//16. Faça um programa que leia um caractere e verifique se é uma letra maiúscula, minúscula ou um número, utilizando a estrutura switch-case.

int main() {
    char i;

    printf("Digite um caractere: ");
    scanf("%c", &i);

    switch(i) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("O caractere '%c' eh uma letra maiuscula.\n", i);
            break;

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            printf("O caractere '%c' eh uma letra minuscula.\n", i);
            break;

        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("O caractere '%c' eh um numero.\n", i);
            break;

        default:
            printf("O caractere '%c' nao eh uma letra maiuscula, minuscula ou um numero.\n", i);
            break;
    }
    return 0;
}
