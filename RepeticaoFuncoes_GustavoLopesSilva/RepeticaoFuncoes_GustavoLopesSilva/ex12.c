#include <stdio.h>

int inverte(int n) {
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    return invertido;
}

int ehPalindromo(int n) {
    return n == inverte(n);
}

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numero invertido: %d\n", inverte(n));

    if (ehPalindromo(n)) {
        printf("%d e palindromo.\n", n);
    } else {
        printf("%d nao e palindromo.\n", n);
    }

    return 0;
}
