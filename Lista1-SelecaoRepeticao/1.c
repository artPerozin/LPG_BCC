#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    if (a == 0 && b == 0) {
        printf("O ponto esta na origem");
    } else if (a == 0) {
        printf("O ponto esta sobre o eixo Y");
    } else if (b == 0) {
        printf("O ponto esta sobre o eixo X");
    } else {
        if (a > 0) {
            if (b > 0) {
                printf("O ponto esta no primeiro quadrante");
            } else {
                printf("O ponto esta no quarto quadrante");
            }
        } else {
            if (b > 0) {
                printf("O ponto esta no segundo quadrante");
            } else {
                printf("O ponto esta no terceiro quadrante");
            }
        }
    }

    return 0;
}
