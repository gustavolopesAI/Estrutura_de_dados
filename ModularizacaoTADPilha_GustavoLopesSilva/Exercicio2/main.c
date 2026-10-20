#include <stdio.h>
#include "fracao.h"

int main(void) {
    Fracao a = criarFracao(2, 4);
    Fracao b = criarFracao(3, 6);
    Fracao invalida = criarFracao(1, 0);

    if (a == NULL || b == NULL) {
        printf("Erro ao criar as fracoes.\n");
        return 1;
    }

    if (invalida == NULL) {
        printf("1/0 nao e uma fracao valida.\n");
    }

    Fracao soma = somarFracoes(a, b);
    Fracao produto = multiplicarFracoes(a, b);

    printf("a = ");
    exibirFracao(a);
    printf("\nb = ");
    exibirFracao(b);
    printf("\na + b = ");
    exibirFracao(soma);
    printf("\na * b = ");
    exibirFracao(produto);
    printf("\n");

    destruirFracao(a);
    destruirFracao(b);
    destruirFracao(soma);
    destruirFracao(produto);

    return 0;
}
