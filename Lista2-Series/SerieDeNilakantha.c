#include <stdio.h>
#include <stdbool.h>

int main () {
    int n;
    float soma = 3;
    bool trocaSinal = false;

    scanf("%d", &n);

    if (n == 1) {
        printf("%d", 3);
        return 0;
    }

    for (int i = 2; i < n*2; i += 2) {
        int denominador = i * (i+1.0) * (i+2.0);
        
        float termo = 4/(float)denominador; 
        if(trocaSinal) {
            termo = -termo;
            trocaSinal = false;
        } else {
            trocaSinal = true;
        }
        printf("%f\n", termo);
        soma += termo;
    }

    printf("%f", soma);
}