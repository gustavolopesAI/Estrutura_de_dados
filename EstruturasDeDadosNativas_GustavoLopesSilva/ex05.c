#include <stdio.h>

#define TAM 10

void inverte(int vetor[], int tamanho) {
    int inicio = 0, fim = tamanho - 1, temp;

    while (inicio < fim) {
        temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }
}

int main(void) {
    int vetor[TAM];
    int i;

    printf("Digite os %d elementos do vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    inverte(vetor, TAM);

    printf("\nVetor invertido:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
