#include <stdio.h>

int main(void) {
    int a, b, dividendo, divisor, resto;

    printf("Digite dois numeros inteiros positivos a e b: ");
    scanf("%d %d", &a, &b);

    dividendo = a;
    divisor = b;

    while (divisor != 0) {
        resto = dividendo % divisor;
        dividendo = divisor;
        divisor = resto;
    }

    int mdc = dividendo;
    int mmc = (a * b) / mdc;

    printf("MDC(%d, %d) = %d\n", a, b, mdc);
    printf("MMC(%d, %d) = %d\n", a, b, mmc);

    return 0;
}
