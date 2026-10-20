#include <stdio.h>

long fatorial(int n) {
    long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long combinacao(int m, int n) {
    return fatorial(m) / (fatorial(m - n) * fatorial(n));
}

int main(void) {
    int m, n;

    printf("Digite m e n (n <= m): ");
    scanf("%d %d", &m, &n);

    printf("C(%d, %d) = %ld\n", m, n, combinacao(m, n));

    return 0;
}
