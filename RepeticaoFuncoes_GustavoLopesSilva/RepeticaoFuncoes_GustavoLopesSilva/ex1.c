#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo (n > 1): ");
    scanf("%d", &n);

    printf("Divisores de %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
