#include <stdio.h>
#include <math.h>

int main() {
    float x, soma = 0.0, termo;
    int n;

    printf("Digite o valor de x e o numero de termos: ");
    scanf("%f %d", &x, &n);

    termo = x;
    soma = termo;

    printf("Termo 1: %f\n", termo);

    for (int i = 1; i < n; i++) {
        termo = -termo * x * x / ( (2*i)*(2*i+1) );
        soma += termo;
        printf("Termo %d: %f\n", i+1, termo);
    }

    printf("Seno aproximado = %f, Seno real = %f\n", soma, sin(x));

    return 0;
}