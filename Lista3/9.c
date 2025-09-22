#include <stdio.h>

double harmonicaIterativa(int n) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }
    return soma;
}

double harmonicaRecursiva(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return 1.0 / n + harmonicaRecursiva(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    double s1 = harmonicaIterativa(n);
    double s2 = harmonicaRecursiva(n);

    printf("Soma harmonica (iterativa): %.6f\n", s1);
    printf("Soma harmonica (recursiva): %.6f\n", s2);

    return 0;
}
