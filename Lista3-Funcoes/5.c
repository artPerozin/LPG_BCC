#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i < n/2; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main () {
    int k, n;
    scanf("%d, %d", &k, &n);

    int primos[3];
    int count = 0;

    for (int i = 1; count < n; i++) {
        if (ehPrimo(k + i)) {
            primos[count - 1] = k + i;
            count++;
        }
    }

    for (int i = 0; i < 3; i++) {
        int primo = primos[i];
        printf("%d\n", primo);
    }
}