#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor(char *s, int n);

int main() {
    char str[50];
    int n;

    printf("Digite a string: ");
    scanf("%s", str);

    printf("Digite o numero de repeticoes: ");
    scanf("%d", &n);

    char *resultado = repetidor(str, n);

    if (resultado == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Resultado: %s\n", resultado);

    free(resultado);

    return 0;
}

char *repetidor(char *s, int n) {
    int tam = strlen(s);
    int tamTotal = tam * n;

    char *nova = (char*) malloc((tamTotal + 1) * sizeof(char));

    if (nova == NULL)
        return NULL;

    int pos = 0;
    for (int i = 0; i < n; i++) {
        strcpy(&nova[pos], s);
        pos += tam;
    }

    nova[tamTotal] = '\0';

    return nova;
}
