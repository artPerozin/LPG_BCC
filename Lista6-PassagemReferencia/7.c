#include <stdio.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main() {
    float M[3][4] = {
        {2.1,  8.3,  7.2,  4.4},
        {1.9,  3.5,  0.8,  9.0},
        {5.1,  6.3,  2.9,  1.1}
    };

    float menor;
    int linha, coluna;

    min_matriz(M, &menor, &linha, &coluna);

    printf("Menor valor = %.2f\n", menor);
    printf("Coordenadas = (%d, %d)\n", linha, coluna);

    return 0;
}

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ) {
    *pMin = mat[0][0];
    *pI = 0;
    *pJ = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] < *pMin) {
                *pMin = mat[i][j];
                *pI = i;
                *pJ = j;
            }
        }
    }
}
