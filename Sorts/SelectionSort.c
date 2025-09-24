#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int v[N];
    srand(time(0));

    for(int i = 0; i < N; i++) {
        v[i] = rand() % 100 + 1;
    }

    printf("Vetor original:\n");
    for(int i = 0; i < N; i++) {
        printf("[%d] : %d\n", i, v[i]);
    }
    printf("\n");

    for(int i = 0; i < N-1; i++) {
        int i_menor = i;
        for (int j = i+1; j < N; j++) {
            if (v[j] < v[i_menor]) i_menor = j;
        }
        int aux = v[i];
        v[i] = v[i_menor];
        v[i_menor] = aux;
    }

    printf("Vetor ordenado (Selection Sort):\n");
    for(int i = 0; i < N; i++) {
        printf("[%d] : %d\n", i, v[i]);
    }

    return 0;
}
