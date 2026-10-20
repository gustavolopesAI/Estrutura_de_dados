#include <stdio.h>
#include <stdlib.h>

int *concatena(const int *v1, int n1, const int *v2, int n2) {
    int *resultado = malloc((n1 + n2) * sizeof(int));

    if (resultado == NULL) {
        return NULL;
    }

    for (int i = 0; i < n1; i++) {
        resultado[i] = v1[i];
    }

    for (int j = 0; j < n2; j++) {
        resultado[n1 + j] = v2[j];
    }

    return resultado;
}

int main(void) {
    int n1;
    printf("Tamanho do primeiro vetor: ");
    scanf("%d", &n1);

    int *v1 = malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    int n2;
    printf("Tamanho do segundo vetor: ");
    scanf("%d", &n2);

    int *v2 = malloc(n2 * sizeof(int));
    for (int i = 0; i < n2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v2[i]);
    }

    int *resultado = concatena(v1, n1, v2, n2);

    if (resultado == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Vetor concatenado: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(resultado);
    v1 = NULL;
    v2 = NULL;
    resultado = NULL;

    return 0;
}