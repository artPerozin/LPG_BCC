#include <stdio.h>

int maiorValor(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    return maior;
}