#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 1;
    }

    exibirPilha(p);

    empilhar(p, 1);
    empilhar(p, 2);
    empilhar(p, 3);
    exibirPilha(p);

    // exibir de novo mostra que a pilha nao foi alterada
    exibirPilha(p);

    Item x;
    desempilhar(p, &x);
    printf("Desempilhado: %d\n", x);
    exibirPilha(p);

    destruirPilha(p);
    return 0;
}
