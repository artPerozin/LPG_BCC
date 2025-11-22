#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *v, *novo;
    float soma = 0, media;
    int count = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    v = (float*) malloc(n * sizeof(float));
    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++) {
        if (v[i] >= media)
            count++;
    }

    novo = (float*) malloc(count * sizeof(float));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= media)
            novo[j++] = v[i];
    }

    printf("\nMedia = %.2f\n", media);
    printf("Valores >= media:\n");
    for (int i = 0; i < count; i++) {
        printf("%.2f ", novo[i]);
    }
    printf("\n");

    free(v);
    free(novo);

    return 0;
}
