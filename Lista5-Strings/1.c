#include <stdio.h>
#include <stdbool.h>

#define s "uma string qualquer"

bool estaContida(char c);

int main () {
    char c;
    if (scanf(" %c", &c) != 1) {
        return 1;
    }
    
    if (estaContida(c)) {
        printf("ta");
    } else {
        printf("nao ta");
    }
    
    return 0;
}

bool estaContida(char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return true;
        }
    }

    return false;
}