#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2, int *p3);

int main() {
    int v1[5] = {1, 3, 5, 7, 9};
    int v2[6] = {2, 3, 4, 5, 6, 7};

    int tam3;
    int *v3 = uniao(v1, 5, v2, 6, &tam3);

    printf("Uniao:\n");
    for (int i = 0; i < tam3; i++)
        printf("%d ", v3[i]);

    printf("\n");

    free(v3);
    return 0;
}

int *uniao(int *v1, int n1, int *v2, int n2, int *p3) {
    int *v3 = NULL;
    int tam = 0;

    for (int i = 0; i < n1; i++) {
        int existe = 0;
        for (int j = 0; j < tam; j++) {
            if (v3[j] == v1[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            tam++;
            v3 = (int*) realloc(v3, tam * sizeof(int));
            v3[tam - 1] = v1[i];
        }
    }

    for (int i = 0; i < n2; i++) {
        int existe = 0;
        for (int j = 0; j < tam; j++) {
            if (v3[j] == v2[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            tam++;
            v3 = (int*) realloc(v3, tam * sizeof(int));
            v3[tam - 1] = v2[i];
        }
    }

    *p3 = tam;

    return v3;
}