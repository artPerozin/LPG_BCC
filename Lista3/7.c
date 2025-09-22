#include <stdio.h>

int somaEspecial(int n, int k, int x) {
    int soma = 0;
    int contador = 0;

    int atual = (x % k == 0) ? x : x + (k - x % k);

    while (contador < n) {
        soma += atual;
        atual += k;
        contador++;
    }

    return soma;
}

int main() {
    int n, k, x;

    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Digite o valor inicial x: ");
    scanf("%d", &x);

    int resultado = somaEspecial(n, k, x);

    printf("O somatorio dos %d primeiros multiplos de %d a partir de %d eh: %d\n", n, k, x, resultado);

    return 0;
}
