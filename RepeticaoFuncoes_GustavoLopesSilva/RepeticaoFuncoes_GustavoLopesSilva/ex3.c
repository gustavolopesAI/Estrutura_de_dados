#include <stdio.h>

int main(void) {
    double peso, soma = 0.0;
    int quantidade = 0;

    printf("Digite os pesos dos lotes (negativo para encerrar):\n");
    scanf("%lf", &peso);

    while (peso >= 0) {
        soma += peso;
        quantidade++;
        scanf("%lf", &peso);
    }

    printf("Quantidade de lotes: %d\n", quantidade);
    printf("Peso total: %.2f kg\n", soma);

    if (quantidade > 0) {
        printf("Peso medio: %.2f kg\n", soma / quantidade);
    } else {
        printf("Nenhum lote registrado.\n");
    }

    return 0;
}
