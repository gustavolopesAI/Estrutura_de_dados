#include <stdio.h>

#define TAM 10

void soma_vetores(int a[], int b[], int resultado[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        resultado[i] = a[i] + b[i];
    }
}

int main(void) {
    int v1[TAM], v2[TAM], v3[TAM];
    int i;

    printf("Digite os %d elementos do primeiro vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os %d elementos do segundo vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v2[i]);
    }

    soma_vetores(v1, v2, v3, TAM);

    printf("\nVetor resultante (soma elemento a elemento):\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
