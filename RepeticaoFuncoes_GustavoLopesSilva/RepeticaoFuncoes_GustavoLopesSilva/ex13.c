#include <stdio.h>

void imprimeFibonacci(int n) {
    long anterior = 0, atual = 1;

    for (int i = 1; i <= n; i++) {
        printf("%ld ", atual);
        long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n");
}

int main(void) {
    int n;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    imprimeFibonacci(n);

    return 0;
}
