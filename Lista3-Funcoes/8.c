#include <stdio.h>

int somaIterativa(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    int s1 = somaIterativa(n);
    int s2 = somaRecursiva(n);

    printf("Soma (iterativa): %d\n", s1);
    printf("Soma (recursiva): %d\n", s2);

    return 0;
}
