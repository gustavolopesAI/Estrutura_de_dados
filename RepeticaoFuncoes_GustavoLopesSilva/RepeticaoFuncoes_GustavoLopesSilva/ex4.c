#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        printf("F(%d) = 1\n", n);
        return 0;
    }

    long anterior = 1, atual = 1, proximo;

    for (int i = 3; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("F(%d) = %ld\n", n, atual);

    return 0;
}
