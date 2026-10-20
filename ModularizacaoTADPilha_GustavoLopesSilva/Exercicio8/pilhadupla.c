#include <stdlib.h>
#include "pilhadupla.h"

struct pilhaDupla {
    Item itens[MAX];
    int topo1; // cresce a partir de 0   (-1 quando vazia)
    int topo2; // cresce a partir de MAX - 1 (MAX quando vazia)
};

PilhaDupla criarPilhaDupla(void) {
    PilhaDupla p = malloc(sizeof(struct pilhaDupla));
    if (p != NULL) {
        p->topo1 = -1;
        p->topo2 = MAX;
    }
    return p;
}

void destruirPilhaDupla(PilhaDupla p) {
    free(p);
}

// cheia so quando os dois topos se encontram (nao sobra posicao livre)
static bool estruturaCheia(PilhaDupla p) {
    return p->topo1 + 1 == p->topo2;
}

bool pilhaVazia(PilhaDupla p, int qual) {
    if (qual == 1) {
        return p->topo1 == -1;
    }
    return p->topo2 == MAX;
}

bool empilhar(PilhaDupla p, int qual, Item x) {
    if ((qual != 1 && qual != 2) || estruturaCheia(p)) {
        return false;
    }
    if (qual == 1) {
        p->topo1++;
        p->itens[p->topo1] = x;
    } else {
        p->topo2--;
        p->itens[p->topo2] = x;
    }
    return true;
}

bool desempilhar(PilhaDupla p, int qual, Item *x) {
    if ((qual != 1 && qual != 2) || pilhaVazia(p, qual)) {
        return false;
    }
    if (qual == 1) {
        *x = p->itens[p->topo1];
        p->topo1--;
    } else {
        *x = p->itens[p->topo2];
        p->topo2++;
    }
    return true;
}
