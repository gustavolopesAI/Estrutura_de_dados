#include <stdio.h>

int main() {
    float compra, total;
    char tipo;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    printf("Digite o tipo de cliente (A - assinante, V - visitante): ");
    scanf(" %c", &tipo);

    if (compra >= 150) {
        if (tipo == 'A') {
            total = compra - (compra * 0.10);
        } else {
            total = compra;
        }
    } else {
        if (tipo == 'A') {
            total = compra + (19.90 / 2);
        } else {
            total = compra + 19.90;
        }
    }

    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}
