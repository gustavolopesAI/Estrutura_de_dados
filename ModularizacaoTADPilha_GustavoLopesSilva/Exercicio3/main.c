#include <stdio.h>
#include "conjunto.h"

int main(void) {
    ConjuntoInteiros c = criarConjunto();
    if (c == NULL) {
        printf("Erro ao criar o conjunto.\n");
        return 1;
    }

    inserir(c, 10);
    inserir(c, 20);
    inserir(c, 30);

    if (!inserir(c, 20)) {
        printf("20 ja pertence ao conjunto, nao foi inserido de novo.\n");
    }

    printf("Cardinalidade: %d\n", cardinalidade(c));
    printf("10 pertence? %s\n", pertence(c, 10) ? "sim" : "nao");

    remover(c, 10);
    printf("Depois de remover 10:\n");
    printf("10 pertence? %s\n", pertence(c, 10) ? "sim" : "nao");
    printf("30 pertence? %s\n", pertence(c, 30) ? "sim" : "nao");
    printf("Cardinalidade: %d\n", cardinalidade(c));

    if (!remover(c, 99)) {
        printf("99 nao pertence ao conjunto, nada removido.\n");
    }

    destruirConjunto(c);
    return 0;
}
