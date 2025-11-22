#include <stdio.h>

int main() {

    int n;
    float soma = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 1) {
        printf("%d", 1);
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        float termo = 1.0/i;
        printf("%f\n", termo);
        soma += termo;
    }

    printf("%f", soma);

    return 0;
}