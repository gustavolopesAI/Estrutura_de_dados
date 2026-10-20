#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantos numeros? ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    double media = soma / n;

    printf("Media: %.2f\n", media);
    printf("Valores maiores que a media:\n");
    for (int i = 0; i < n; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
        }
    }

    free(vetor);
    vetor = NULL;

    return 0;
}