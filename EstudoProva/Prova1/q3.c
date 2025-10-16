#include <stdio.h>

#define COL 4
#define LIN 3

void max_lin(int mat[LIN][COL], int vet[COL]);

int main() {
    int mat[LIN][COL] = {
        {1, 5, 3, 2},
        {7, 8, 2, 4},
        {9, 6, 0, 1}
    };

    int vet[COL] = {0};

    max_lin(mat, vet);

    return 0;
}


void max_lin(int mat[LIN][COL], int vet[COL]) {
    int LE, maiorNumero = 1;
    
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            int temp = mat[i][j];

            if (maiorNumero < temp)  {
                maiorNumero = temp;
                LE = i;
            }
        }
    }

    int maiorLinha[COL];

    for(int i = 0; i < COL; i++) {
        maiorLinha[i] = mat[LE][i];
        printf("%d ", maiorLinha[i]);
    }

}