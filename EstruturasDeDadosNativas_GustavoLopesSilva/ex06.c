#include <stdio.h>

#define MAX 20

int main(void) {
    int matriz[MAX][MAX];
    int somaLinhas[MAX] = {0};
    int somaColunas[MAX] = {0};
    int m, n, i, j;

    printf("Digite o numero de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz %dx%d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }

    printf("\nMatriz (formato tabular):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf(" | Soma da linha %d: %d\n", i, somaLinhas[i]);
    }

    printf("\nSoma de cada coluna:\n");
    for (j = 0; j < n; j++) {
        printf("Coluna %d: %d\n", j, somaColunas[j]);
    }

    return 0;
}
