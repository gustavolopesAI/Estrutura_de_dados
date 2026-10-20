
#include <stdio.h>

#define TAM 20

int main(void) {
    int vetor[TAM];
    int i, maior, menor, pos_maior, pos_menor;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];
    pos_maior = pos_menor = 0;

    for (i = 1; i < TAM; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }

    printf("\nMaior valor: %d (primeira ocorrencia na posicao %d)\n", maior, pos_maior);
    printf("Menor valor: %d (primeira ocorrencia na posicao %d)\n", menor, pos_menor);

    return 0;
}
