#include <stdio.h>
#include <stdlib.h>


int busca_binaria (int v[], int n, int chave){
    int ini = 0, fim = n-1, meio;
    int cont = 0;
    do {
        cont++;
        meio = (ini + fim) / 2;
        if (v[meio] == chave){
            printf("[busca executada em %d iteracoes]\n", cont);
            return meio;
        }
        if(v[meio] < chave) {
            ini = meio +1;
        } else {
            fim = meio -1;
        }
    } while (ini <= fim); {
        printf("[busca executada em %d iteracoes]\n", cont);
        return -1;
    }
}