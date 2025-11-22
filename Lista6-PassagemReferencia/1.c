#include <stdio.h>

void inc_dec(int *a, int *b);

int main() {
    int x, y;

    printf("Digite o valor de a: ");
    scanf("%d", &x);

    printf("Digite o valor de b: ");
    scanf("%d", &y);

    inc_dec(&x, &y);

    printf("Depois da funcao:\n");
    printf("a = %d\n", x);
    printf("b = %d\n", y);

    return 0;
}

void inc_dec(int *a, int *b) {
    (*a)++;
    (*b)--;
}
