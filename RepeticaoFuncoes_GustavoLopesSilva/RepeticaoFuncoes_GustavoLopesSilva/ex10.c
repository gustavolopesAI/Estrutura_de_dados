#include <stdio.h>

double potencia(double base, int expoente) {
    double resultado = 1.0;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main(void) {
    double base;
    int expoente;

    printf("Digite a base (real): ");
    scanf("%lf", &base);
    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    printf("%.2f ^ %d = %.4f\n", base, expoente, potencia(base, expoente));

    return 0;
}
