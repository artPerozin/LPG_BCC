#include <stdio.h>

void troca_valor(float *x, float *y);

int main() {
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("\nAntes da troca:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    troca_valor(&a, &b);

    printf("\nDepois da troca:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    return 0;
}

void troca_valor(float *x, float *y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}
