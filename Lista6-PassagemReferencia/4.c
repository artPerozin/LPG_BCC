#include <stdio.h>

void cacula_hora(int totalMinutos, int *ph, int *pm);

int main() {
    int total, h, m;

    printf("Digite os minutos desde meia-noite: ");
    scanf("%d", &total);

    cacula_hora(total, &h, &m);

    printf("Hora atuaboa l: %02d:%02d\n", h, m);

    return 0;
}

void cacula_hora(int totalMinutos, int *ph, int *pm) {
    *ph = totalMinutos / 60;
    *pm = totalMinutos % 60;
}