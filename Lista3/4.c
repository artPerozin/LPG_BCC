#include <stdio.h>

int somaImparesEntre(int x, int y) {
    int soma = 0;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    return soma;
}

int main () {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    int resultado = somaImparesEntre(x, y);
    printf("A soma dos numeros impares entre %d e %d eh: %d\n", x, y, resultado);

    return 0;
}
