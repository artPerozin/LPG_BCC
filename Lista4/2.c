#include <stdio.h>

void fibonacci(int v[], int n) {
    if (n > 0) v[0] = 0;
    if (n > 1) v[1] = 1;

    for (int i = 2; i < n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }
}

int main () {
    int n;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    int v[n];
    fibonacci(v, n);

    printf("Sequencia de Fibonacci com %d termos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}