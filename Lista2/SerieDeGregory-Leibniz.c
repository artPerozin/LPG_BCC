#include <stdio.h>
#include <stdbool.h>

int main () {
    int n;
    float soma = 0.0;
    bool trocaSinal = false;

    scanf ("%d", &n);

    if (n == 1) {
        printf("%d", 4);
        return 0;
    }

    for (int i = 1; i < n; i+=2) {
        float termo = 4.0/i;
        if (trocaSinal) {
            termo = -termo;
            trocaSinal = false;
        } else {
            trocaSinal = true;
        }
        
        soma += termo;
        printf("%f\n", termo);
    }
    
    printf("%f", soma);
    return 0;

}