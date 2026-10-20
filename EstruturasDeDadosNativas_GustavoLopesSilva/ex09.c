#include <stdio.h>

#define MAX 20

int main(void) {
    int matriz[MAX][MAX];
    int n, i, j;
    int somaPrincipal = 0, somaSecundaria = 0;
    int simetrica = 1;

    printf("Digite a ordem n da matriz quadrada: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][n - 1 - i];
    }

    for (i = 0; i < n && simetrica; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
                break;
            }
        }
    }

    printf("\nSoma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);

    if (simetrica) {
        printf("A matriz e simetrica.\n");
    } else {
        printf("A matriz nao e simetrica.\n");
    }

    return 0;
}
