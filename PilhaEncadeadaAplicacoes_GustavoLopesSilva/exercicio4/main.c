#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 1;
    }

    empilhar(p, 10);
    empilhar(p, 20);
    empilhar(p, 30);

    printf("Pilha (topo -> base): ");
    exibirPilha(p);

    esvaziarPilha(p);
    printf("Pilha vazia? %s\n", pilhaVazia(p) ? "sim" : "nao");

    // a pilha continua podendo ser usada
    empilhar(p, 5);
    printf("Pilha depois de empilhar 5: ");
    exibirPilha(p);

    destruirPilha(p);
    return 0;
}
