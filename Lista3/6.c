#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int a = 1, b = 1, c = 0;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci com %d termos:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
