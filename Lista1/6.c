#include <stdio.h>

int somaImpares(int x, int y);

int main () {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("A soma dos impares entre %d e %d e: %d\n", x, y, somaImpares(x, y));
    }

}

int somaImpares(int x, int y) {
    int soma = 0;
    if (x < y){
        for (int i = x + 1; i < y; i++){
            if (i % 2 == 0) continue;
            soma += i;
        }
    }
    if (x > y){
        for (int i = y + 1; i < x; i++){
            if (i % 2 == 0) continue;
            soma += i;
        }
    }
    return soma;
}