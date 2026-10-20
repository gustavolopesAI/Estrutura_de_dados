#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha {
    Item itens[MAX];
    int topo; // posicao do elemento do topo (-1 quando vazia)
};

Pilha criarPilha(void) {
    Pilha p = malloc(sizeof(struct pilha));
    if (p != NULL) {
        p->topo = -1;
    }
    return p;
}

void destruirPilha(Pilha p) {
    free(p);
}

bool pilhaVazia(Pilha p) {
    return p->topo == -1;
}

bool pilhaCheia(Pilha p) {
    return p->topo == MAX - 1;
}

bool empilhar(Pilha p, Item x) {
    if (pilhaCheia(p)) {
        return false;
    }
    p->topo++;
    p->itens[p->topo] = x;
    return true;
}

bool desempilhar(Pilha p, Item *x) {
    if (pilhaVazia(p)) {
        return false;
    }
    *x = p->itens[p->topo];
    p->topo--;
    return true;
}

bool consultarTopo(Pilha p, Item *x) {
    if (pilhaVazia(p)) {
        return false;
    }
    *x = p->itens[p->topo];
    return true;
}

void exibirPilha(Pilha p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia\n");
        return;
    }
    // percorre do topo ate a base sem mexer em p->topo
    printf("Topo -> ");
    for (int i = p->topo; i >= 0; i--) {
        printf("%d ", p->itens[i]);
    }
    printf("<- Base\n");
}
