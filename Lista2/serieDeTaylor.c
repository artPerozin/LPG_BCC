#include <stdio.h>
#include <math.h>

float fatorial(int n);

int main () {
    int x, n;
    float soma = 0.0;
    scanf("%d %d", &x, &n);

    for (int i = 0; i < n; i++) {
        float termo = pow(x, i) / (float)fatorial(i);
        soma += termo;
        printf("%f\n", termo);
    }
    printf("%f\n", soma);
    return 0;
}

float fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}
