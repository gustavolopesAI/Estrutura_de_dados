#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo (n > 1): ");
    scanf("%d", &n);

    printf("Fatoracao de %d: ", n);

    int primeiro = 1;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (!primeiro) {
                printf(" x ");
            }
            printf("%d", i);
            primeiro = 0;
            n /= i;
        }
    }

    printf("\n");

    return 0;
}
