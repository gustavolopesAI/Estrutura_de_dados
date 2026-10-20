
#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[100];
    double precoUnitario;
    int quantidadeEstoque;
} Produto;

double valor_total_investido(Produto p) {
    return p.precoUnitario * p.quantidadeEstoque;
}

Produto aplica_reajuste(Produto p, double percentual) {
    p.precoUnitario += p.precoUnitario * (percentual / 100.0);
    return p;
}

void exibe_produto(Produto p) {
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preco unitario: %.2f\n", p.precoUnitario);
    printf("Quantidade em estoque: %d\n", p.quantidadeEstoque);
    printf("Valor total investido: %.2f\n", valor_total_investido(p));
}

int main(void) {
    Produto produto;
    double percentualReajuste;

    printf("Digite o codigo do produto: ");
    scanf("%d", &produto.codigo);
    getchar();

    printf("Digite o nome do produto: ");
    fgets(produto.nome, sizeof(produto.nome), stdin);
    int len = strlen(produto.nome);
    if (len > 0 && produto.nome[len - 1] == '\n') {
        produto.nome[len - 1] = '\0';
    }

    printf("Digite o preco unitario: ");
    scanf("%lf", &produto.precoUnitario);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidadeEstoque);

    printf("\n--- Dados do produto ANTES do reajuste ---\n");
    exibe_produto(produto);

    printf("\nDigite o percentual de reajuste (%%): ");
    scanf("%lf", &percentualReajuste);

    produto = aplica_reajuste(produto, percentualReajuste);

    printf("\n--- Dados do produto DEPOIS do reajuste ---\n");
    exibe_produto(produto);

    return 0;
}
