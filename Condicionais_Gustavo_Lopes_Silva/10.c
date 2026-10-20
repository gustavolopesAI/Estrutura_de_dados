#include <stdio.h>

int main() {
    float peso, franquia, taxaFixa, valorExcedenteKg, excedente, total;
    int modalidade, assinatura;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);
    printf("Digite a modalidade de envio (1-padrao, 2-expressa, 3-premium): ");
    scanf("%d", &modalidade);
    printf("Possui plano de assinatura? (1-sim, 0-nao): ");
    scanf("%d", &assinatura);

    if (peso <= 0) {
        printf("Peso invalido\n");
    } else {
        if (modalidade == 1) {
            taxaFixa = 18.00;
            franquia = 5.0;
            valorExcedenteKg = 6.50;
        } else if (modalidade == 2) {
            taxaFixa = 35.00;
            franquia = 10.0;
            valorExcedenteKg = 4.00;
        } else {
            taxaFixa = 60.00;
            franquia = 20.0;
            valorExcedenteKg = 2.50;
        }

        if (assinatura == 1) {
            franquia = franquia + 5.0;
        }

        if (peso > franquia) {
            excedente = peso - franquia;
            total = taxaFixa + (excedente * valorExcedenteKg);
        } else {
            total = taxaFixa;
        }

        printf("Valor a pagar pelo envio: R$ %.2f\n", total);
    }

    return 0;
}
