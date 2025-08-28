#include <stdio.h>

int main () {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);
    int valores[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;

    for (int i = 0; i < n; i++) {
        if(valores[i] % 2 == 0) quantidadePares++;
        else quantidadeImpares++;

        if(valores[i] < 0) quantidadeNegativos++;
        else if (valores[i] > 0) quantidadePositivos++;
    }

    printf("Pares: %d\n", quantidadePares);
    printf("Impares: %d\n", quantidadeImpares);
    printf("Positivos: %d\n", quantidadePositivos);
    printf("Negativos: %d\n", quantidadeNegativos);
}