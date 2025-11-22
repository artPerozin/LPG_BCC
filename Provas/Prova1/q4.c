#include <stdio.h>

char orig[] = "otorrinolaringologista";
char dest[sizeof(orig)];

void copia_vogais (char orig[], char dest[]);

int main () {
    copia_vogais(orig, dest);
    printf("%s\n", dest);
    return 0;
}

void copia_vogais (char orig[], char dest[]) {
    int id = 0;
    
    for (int i = 0; orig[i] != '\0'; i++) {
        if (orig[i] == 'a' || orig[i] == 'e' || orig[i] == 'i' || orig[i] == 'o' || orig[i] == 'u')
            dest[id++] = orig[i];
    }

    dest[id] = '\0';
}