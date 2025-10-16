#include <stdio.h>

int contem (char s[], char c) {
    for(int i = 0; s[i] != '\0'; i++ ) {
        if(s[i] == c) return 1;
    }
}

int main () {
    char str[20], car;

    if(contem(str, car)) {
        printf("Contém!\n");
    } else {
        printf("não Contém\n");
    }
}