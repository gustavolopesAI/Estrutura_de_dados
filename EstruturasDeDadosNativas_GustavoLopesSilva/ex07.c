#include <stdio.h>

#define MAX 20

void transposta(int origem[MAX][MAX], int destino[MAX][MAX], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            destino[j][i] = origem[i][j];
        }
    }
}

void imprime_matriz(int matriz[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matriz[MAX][MAX], transposta_matriz[MAX][MAX];
    int m, n, i, j;

    printf("Digite o numero de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz %dx%d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    transposta(matriz, transposta_matriz, m, n);

    printf("\nMatriz original (%dx%d):\n", m, n);
    imprime_matriz(matriz, m, n);

    printf("\nMatriz transposta (%dx%d):\n", n, m);
    imprime_matriz(transposta_matriz, n, m);

    return 0;
}
