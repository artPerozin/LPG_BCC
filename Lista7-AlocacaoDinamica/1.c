#include <stdio.h>
#include <stdlib.h>

float *clone(float *v, int n);

int main() {
    int n = 5;
    float original[5] = {1.5, 3.2, 4.8, 9.1, 2.0};

    float *copia = clone(original, n);

    if (copia == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Vetor clonado:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", copia[i]);
    }
    printf("\n");

    free(copia);

    return 0;
}

float *clone(float *v, int n) {
    float *novoVet = (float*) malloc(n * sizeof(float));

    if (novoVet == NULL)
        return NULL;

    for (int i = 0; i < n; i++) {
        novoVet[i] = v[i];
    }

    return novoVet;
}
