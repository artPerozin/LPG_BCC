#include <stdio.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);


int main() {
    int v[5] = {7, 2, 9, 4, 1};
    int menor, maior;
    
    max_min(v, 5, &menor, &maior);

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);
    
    return 0;
}

void max_min(int vet[], int tam, int *pMin, int *pMax) {
    *pMin = vet[0];
    *pMax = vet[0];

    for (int i = 1; i < tam; i++) {
        if (vet[i] < *pMin)
            *pMin = vet[i];
        if (vet[i] > *pMax)
            *pMax = vet[i];
    }
}