#include <stdio.h>

#define MAX 20

void multiplica_matrizes(int a[MAX][MAX], int b[MAX][MAX], int resultado[MAX][MAX],
                          int m, int p, int n) {
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < p; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void imprime_matriz(int matriz[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%6d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int a[MAX][MAX], b[MAX][MAX], resultado[MAX][MAX];
    int m, p, n, i, j;

    printf("Digite m (linhas de A): ");
    scanf("%d", &m);
    printf("Digite p (colunas de A / linhas de B): ");
    scanf("%d", &p);
    printf("Digite n (colunas de B): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A (%dx%d):\n", m, p);
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (%dx%d):\n", p, n);
    for (i = 0; i < p; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multiplica_matrizes(a, b, resultado, m, p, n);

    printf("\nMatriz resultante (%dx%d):\n", m, n);
    imprime_matriz(resultado, m, n);

    return 0;
}
