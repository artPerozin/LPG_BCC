#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float termo = 1.0 / i;

        if (i % 2 == 0) {
            termo = -termo;
        }

        soma += termo;
        printf("%f\n", termo);
    }

    printf("Soma = %f\n", soma);

    return 0;
}
