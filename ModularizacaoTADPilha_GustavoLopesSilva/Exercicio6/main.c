#include <stdio.h>
#include "pilha.h"

void decimalParaBinario(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return;
    }

    while (n > 0) {
        empilhar(p, n % 2);
        n = n / 2;
    }

    // os restos saem na ordem inversa, que e a ordem correta do binario
    Item bit;
    while (desempilhar(p, &bit)) {
        printf("%d", bit);
    }
    printf("\n");

    destruirPilha(p);
}

int main(void) {
    int n;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser nao negativo.\n");
        return 1;
    }

    printf("%d em binario: ", n);
    decimalParaBinario(n);

    return 0;
}
