#include <stdio.h>

float fatorial(int n);

int main() {
    int n;
    float soma = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float termo = 1/(float)fatorial(i);
        printf("%f\n", termo);
        soma += termo;
    }
    
    printf("%f\n", soma);
    return 0;
}

float fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}
