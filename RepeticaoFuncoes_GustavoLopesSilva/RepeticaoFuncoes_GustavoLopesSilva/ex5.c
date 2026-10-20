#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
