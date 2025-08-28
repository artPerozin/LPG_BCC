#include <stdio.h>

int main () {
    int hora_inicial, hora_final, duracao;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &hora_inicial);

    printf("Digite a hora final do jogo: ");
    scanf("%d", &hora_final);

    if (hora_inicial == hora_final) duracao = 24;
    else if (hora_inicial < hora_final) duracao = hora_final - hora_inicial;
    else duracao = (24 - hora_inicial) + hora_final;

    printf("O JOGO DUROU %d HORA(S).\n", duracao);
}