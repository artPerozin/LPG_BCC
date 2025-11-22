#include <stdio.h>

long long fatorialIter(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long long fatorialRec(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatorialRec(n - 1);
}

double calcEIter(int n) {
    double soma = 0.0;
    for (int k = 0; k <= n; k++) {
        soma += 1.0 / fatorialIter(k);
    }
    return soma;
}

double calcERec(int n) {
    if (n == 0) return 1.0;
    return 1.0 / fatorialRec(n) + calcERec(n - 1);
}

int main() {
    int n;
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    double e_iter = calcEIter(n);
    double e_rec = calcERec(n);

    printf("Aproximacao de e (iterativa): %.10f\n", e_iter);
    printf("Aproximacao de e (recursiva): %.10f\n", e_rec);

    return 0;
}
