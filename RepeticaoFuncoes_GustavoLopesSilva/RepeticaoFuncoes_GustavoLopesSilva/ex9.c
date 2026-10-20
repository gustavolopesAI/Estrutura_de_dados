#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));

    return 0;
}
