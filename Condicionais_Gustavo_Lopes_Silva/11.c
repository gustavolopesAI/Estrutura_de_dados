#include <stdio.h>

int main() {
    float pedido, frete;

    printf("Digite o valor total do pedido: ");
    scanf("%f", &pedido);

    printf("%s\n", (pedido >= 200.00) ? "Frete gratis" : "Frete cobrado");
    frete = (pedido >= 200.00) ? 0.00 : 25.00;
    printf("Valor do frete: R$ %.2f\n", frete);

    return 0;
}
