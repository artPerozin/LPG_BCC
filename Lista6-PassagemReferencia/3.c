#include <stdio.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main() {
    float r, perimetro, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    calcula_circulo(r, &perimetro, &area);

    printf("\nResultados:\n");
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea) {
    const float PI = 3.14159;

    *pPerimetro = 2 * PI * raio;
    *pArea = PI * raio * raio;
}
