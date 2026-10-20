#include <stdio.h>

int main(void) {
    int n;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);

    double maiorPreco = 0.0;

    for (int i = 1; i <= n; i++) {
        double precoAtual, percentual, novoPreco;

        printf("Produto %d - preco atual: ", i);
        scanf("%lf", &precoAtual);
        printf("Produto %d - percentual de aumento (%%): ", i);
        scanf("%lf", &percentual);

        novoPreco = precoAtual + precoAtual * (percentual / 100.0);
        printf("Novo preco do produto %d: %.2f\n", i, novoPreco);

        if (novoPreco > maiorPreco) {
            maiorPreco = novoPreco;
        }
    }

    printf("Maior novo preco: %.2f\n", maiorPreco);

    return 0;
}
