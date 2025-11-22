#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int somaPrimos(int v[], int n) {
    int soma = 0;
    int count = 0;
    int num = 2;

    while (count < n) {
        if (ehPrimo(num)) {
            v[count] = num;
            soma += num;
            count++;
        }
        num++;
    }
    return soma;
}

int main () {
    int n;

    printf("Digite a quantidade de termos primos a serem somados: ");
    scanf("%d", &n);

    int v[n];
    int soma = somaPrimos(v, n);

    printf("Os %d primeiros primos sao:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\nSoma = %d\n", soma);

    return 0;
}
