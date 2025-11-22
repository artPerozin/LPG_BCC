#include <stdio.h>

void busca_todos_rec(int v[], int n, int chave, int pos) {
    if (pos == n) return;
    if (v[pos] == chave) printf("%d ", pos);
    busca_todos_rec(v, n, chave, pos + 1);
}

int main() {
    int n, chave;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    printf("indices = { ");

    busca_todos_rec(v, n, chave, 0);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == chave) count++;
    }
    for (int i = count; i < n; i++) printf("-1 ");

    printf("}\n");

    return 0;
}
