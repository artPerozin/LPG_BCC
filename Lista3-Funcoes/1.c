#include <stdio.h>

int main () {
    float a, b, c;
    
    printf("Escreva o valor dos 3 lados do triangulo: ");
    scanf('%f, %f, %f,', &a, &b, &c);

    int tipo_triangulo(float a, float b, float c);
}

int tipo_triangulo(float a, float b, float c) {
    float temp;

    if (a < b) temp = a; a = b; b = temp;
    if (a < c) temp = a; a = c; c = temp;
    if (b < c) temp = b; b = c; c = temp;

    if (a >= b + c) return 0;
    if (a == b & b == c) return 1;
    if (a == b || b == c || a == c) return 2;
    if (a != c && b != c) return 3;
}