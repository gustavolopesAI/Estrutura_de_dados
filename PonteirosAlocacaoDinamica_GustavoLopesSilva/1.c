#include <stdio.h>

// Passo 1: assinatura da função
void min_max(const int v[], int n, int *menor, int *maior) {
    // Passo 2: inicializa com o primeiro elemento
    *menor = v[0];
    *maior = v[0];

    // Passo 3: percorre o restante do vetor
    for (int i = 1; i < n; i++) {
        if (v[i] < *menor) {
            *menor = v[i];
        }
        if (v[i] > *maior) {
            *maior = v[i];
        }
    }
}

int main(void) {
    int n;
    printf("Quantos numeros? ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Passo 4: declara variáveis comuns para receber o resultado
    int menor, maior;

    // Passo 5: chama a função passando os endereços
    min_max(vetor, n, &menor, &maior);

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}