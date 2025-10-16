#include <stdio.h>

void copia_pares_impares(int v[], int n, int vp[], int vi[]);

int main () {
    int v[] = {11, 5, 2, 8, 44, 15, 12, 19, 6, 20};
    int n = sizeof(v) / sizeof(v[0]);
    int vp[10];
    int vi[10];

    copia_pares_impares(v, n, vp, vi);

    printf("Pares: ");
    for (int i = 0; vp[i] != -1; i++) {
        printf("%d ", vp[i]);
    }
    printf("\nImpares: ");
    for (int i = 0; vi[i] != -1; i++) {
        printf("%d ", vi[i]);
    }
    printf("\n");
    return 0;
}


void copia_pares_impares(int v[], int n, int vp[], int vi[]) {
    int ip = 0, ii = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            vp[ip] = v[i];
            ip++;
        } else {
            vi[ii] = v[i];
            ii++;
        }
    }

    vp[ip] = -1;
    vi[ii] = -1;
}
