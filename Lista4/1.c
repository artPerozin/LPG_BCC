#include <stdio.h>

int compara(float a[], float b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    float v1[n], v2[n];

    printf("Digite os elementos de v1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v1[i]);
    }

    printf("Digite os elementos de v2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v2[i]);
    }

    if (compara(v1, v2, n)) {
        printf("Os vetores sao iguais.\n");
    } else {
        printf("Os vetores sao diferentes.\n");
    }

    return 0;
}
