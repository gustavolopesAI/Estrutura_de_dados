#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 1;
    }

    Item x;

    // enche a pilha ate o limite
    int quantidade = 0;
    while (empilhar(p, quantidade * 10)) {
        quantidade++;
    }
    printf("Foram empilhados %d elementos.\n", quantidade);
    printf("Pilha cheia? %s\n", pilhaCheia(p) ? "sim" : "nao");

    if (consultarTopo(p, &x)) {
        printf("Topo: %d\n", x);
    }

    // esvazia a pilha
    while (desempilhar(p, &x)) {
    }
    printf("Pilha vazia? %s\n", pilhaVazia(p) ? "sim" : "nao");

    if (!consultarTopo(p, &x)) {
        printf("Nao ha topo para consultar: a pilha esta vazia.\n");
    }

    destruirPilha(p);
    return 0;
}
