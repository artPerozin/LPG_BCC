#include <stdio.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main() {
    float v[5] = {2.5, 7.1, 3.0, 8.9, 1.2};
    float maior;
    int indice;

    max_vetor(v, 5, &maior, &indice);

    printf("Maior valor = %.2f\n", maior);
    printf("Indice = %d\n", indice);

    return 0;
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice) {
    *pMax = vet[0];
    *pIndice = 0;

    for (int i = 1; i < tam; i++) {
        if (vet[i] > *pMax) {
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}