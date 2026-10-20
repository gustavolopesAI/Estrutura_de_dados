#include <stdlib.h>
#include "conjunto.h"

struct conjunto {
    int elementos[MAX];
    int tamanho;
};

// devolve a posicao de x no vetor, ou -1 se nao encontrar
static int buscar(ConjuntoInteiros c, int x) {
    for (int i = 0; i < c->tamanho; i++) {
        if (c->elementos[i] == x) {
            return i;
        }
    }
    return -1;
}

ConjuntoInteiros criarConjunto(void) {
    ConjuntoInteiros c = malloc(sizeof(struct conjunto));
    if (c != NULL) {
        c->tamanho = 0;
    }
    return c;
}

void destruirConjunto(ConjuntoInteiros c) {
    free(c);
}

bool inserir(ConjuntoInteiros c, int x) {
    if (c->tamanho == MAX || pertence(c, x)) {
        return false;
    }
    c->elementos[c->tamanho] = x;
    c->tamanho++;
    return true;
}

bool remover(ConjuntoInteiros c, int x) {
    int pos = buscar(c, x);
    if (pos == -1) {
        return false;
    }
    // como nao ha ordem, o ultimo elemento ocupa a posicao liberada
    c->elementos[pos] = c->elementos[c->tamanho - 1];
    c->tamanho--;
    return true;
}

bool pertence(ConjuntoInteiros c, int x) {
    return buscar(c, x) != -1;
}

int cardinalidade(ConjuntoInteiros c) {
    return c->tamanho;
}
