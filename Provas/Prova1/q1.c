#include <stdio.h>
#include <math.h>

void hiper(int n);  /* protótipo declarado no escopo */

int main () {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    hiper(n);
    return 0;
}

void hiper(int n) {
    int produto = 1;
    for (int i = 2; i <= n; i++) {
        int temp = produto * pow(i, i);
        produto = temp;
    }
    printf("%d", produto);
}
