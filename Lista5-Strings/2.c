#include <stdio.h>
#include <stdbool.h>

#define s "uma string qualquer"

int estaContida(char c);

int main () {
    char c;
    if (scanf(" %c", &c) != 1) {
        return 1;
    }
    printf("esta contida %d vezes", estaContida(c));
    return 0;
}

int estaContida(char c) {

    int contador = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            contador++;
        }
    }
    return contador;
}