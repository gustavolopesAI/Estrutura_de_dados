#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no {
    Item item;
    struct no *prox;
};

struct pilha {
    struct no *topo; // NULL quando vazia
};

Pilha criarPilha(void) {
    Pilha p = malloc(sizeof(struct pilha));
    if (p != NULL) {
        p->topo = NULL;
    }
    return p;
}

void destruirPilha(Pilha p) {
    esvaziarPilha(p);
    free(p);
}

bool pilhaVazia(Pilha p) {
    return p->topo == NULL;
}

bool empilhar(Pilha p, Item x) {
    struct no *novo = malloc(sizeof(struct no));
    if (novo == NULL) {
        return false;
    }
    novo->item = x;
    novo->prox = p->topo;
    p->topo = novo;
    return true;
}

bool desempilhar(Pilha p, Item *x) {
    if (pilhaVazia(p)) {
        return false;
    }
    struct no *aux = p->topo;
    *x = aux->item;
    p->topo = aux->prox;
    free(aux);
    return true;
}

bool consultarTopo(Pilha p, Item *x) {
    if (pilhaVazia(p)) {
        return false;
    }
    *x = p->topo->item;
    return true;
}

void exibirPilha(Pilha p) {
    struct no *atual = p->topo;
    while (atual != NULL) {
        printf("%d ", atual->item);
        atual = atual->prox;
    }
    printf("\n");
}

void esvaziarPilha(Pilha p) {
    struct no *aux;
    while (p->topo != NULL) {
        aux = p->topo;
        p->topo = aux->prox;
        free(aux);
    }
}

void concatenarPilhas(Pilha p1, Pilha p2) {
    if (pilhaVazia(p2)) {
        return;
    }

    // acha a base da segunda pilha
    struct no *base = p2->topo;
    while (base->prox != NULL) {
        base = base->prox;
    }

    // a base da segunda passa a apontar para o topo da primeira
    base->prox = p1->topo;
    p1->topo = p2->topo;
    p2->topo = NULL;
}
