#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float p, s, t;
        scanf("%f %f %f", &p, &s, &t);

        float mediaPonderada = (p*2 + s*3 + t*5) / 10;
        printf("%.1f\n", mediaPonderada);
    }
}