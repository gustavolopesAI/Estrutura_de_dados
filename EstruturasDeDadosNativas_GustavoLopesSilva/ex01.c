
#include <stdio.h>

int main(void) {
    int n, i, count_maiores = 0;
    double valores[100];
    double soma = 0.0, media;

    printf("Digite o valor de n (1 <= n <= 100): ");
    scanf("%d", &n);

    while (n < 1 || n > 100) {
        printf("Valor invalido. Digite novamente: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        printf("Digite o %dº valor real: ", i + 1);
        scanf("%lf", &valores[i]);
        soma += valores[i];
    }

    media = soma / n;

    for (i = 0; i < n; i++) {
        if (valores[i] > media) {
            count_maiores++;
        }
    }

    printf("\nMedia dos valores: %.2f\n", media);
    printf("Quantidade de valores estritamente maiores que a media: %d\n", count_maiores);

    return 0;
}
