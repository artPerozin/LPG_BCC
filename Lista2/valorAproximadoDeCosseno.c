#include <stdio.h>
#include <math.h>

int main() {
    float x, soma = 0.0, termo;
    int n;

    printf("Digite o valor de x e o numero de termos: ");
    scanf("%f %d", &x, &n);

    termo = 1.0;
    soma = termo;

    printf("Termo 1: %f\n", termo);

    for (int i = 1; i < n; i++) {
        termo = -termo * x * x / ( (2*i-1)*(2*i) );
        soma += termo;
        printf("Termo %d: %f\n", i+1, termo);
    }

    printf("Cosseno aproximado = %f, Cosseno real = %f\n", soma, cos(x));

    return 0;
}