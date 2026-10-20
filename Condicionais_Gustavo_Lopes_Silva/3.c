#include <stdio.h>

int main() {
    int idade, terca;
    float valor;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("A visita ocorre em uma terca-feira? (1-sim, 0-nao): ");
    scanf("%d", &terca);

    if (idade < 6) {
        valor = 0.0;
    } else if ((idade >= 6 && idade <= 17) || idade > 60) {
        valor = 15.0;
    } else {
        valor = 30.0;
    }

    if (terca == 1 && valor > 0) {
        valor = valor - (valor * 0.40);
    }

    printf("Valor final do ingresso: R$ %.2f\n", valor);

    return 0;
}
