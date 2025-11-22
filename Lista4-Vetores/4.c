#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]) {
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            indices[k] = i;
            k++;
        }
    }

    for (; k < n; k++) {
        indices[k] = -1;
    }
}

int main() {
    int n, chave;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int indices[n];

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    busca_todos(v, n, chave, indices);

    printf("indices = { ");
    for (int i = 0; i < n; i++) {
        printf("%d ", indices[i]);
    }
    printf("}\n");

    return 0;
}
