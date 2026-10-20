#include <stdio.h>

int main() {
    float consumo, taxa;

    printf("Digite o consumo mensal de agua (m3): ");
    scanf("%f", &consumo);

    if (consumo > 15) {
        taxa = (consumo - 15) * 9.80;
        printf("Valor da taxa de excedente: R$ %.2f\n", taxa);
    } else {
        printf("Consumo dentro da franquia\n");
    }

    return 0;
}
