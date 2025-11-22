#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    int *v, *vp = NULL, *vn = NULL;
    int tamP = 0, tamN = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    v = (int*) malloc(n * sizeof(int));

    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        v[i] = x;

        if (x > 0) {
            tamP++;
            vp = (int*) realloc(vp, tamP * sizeof(int));
            vp[tamP - 1] = x;
        } else if (x < 0) {
            tamN++;
            vn = (int*) realloc(vn, tamN * sizeof(int));
            vn[tamN - 1] = x;
        }
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    printf("\n\nVetor de positivos:\n");
    for (int i = 0; i < tamP; i++)
        printf("%d ", vp[i]);

    printf("\n\nVetor de negativos:\n");
    for (int i = 0; i < tamN; i++)
        printf("%d ", vn[i]);

    printf("\n");

    free(v);
    free(vp);
    free(vn);

    return 0;
}
