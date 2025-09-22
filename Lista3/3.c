#include <stdio.h>

int ehDigito(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char caractere;
    int valor;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (ehDigito(caractere)) {
        valor = caractere - '0';
        printf("O caractere '%c' representa o numero inteiro %d.\n", caractere, valor);
    } else {
        printf("O caractere '%c' nao eh um digito de 0 a 9.\n", caractere);
    }

    return 0;
}
