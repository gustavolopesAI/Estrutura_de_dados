#include <stdio.h>
#include "pilhadupla.h"

int main(void) {
    PilhaDupla p = criarPilhaDupla();
    if (p == NULL) {
        printf("Erro ao criar a pilha dupla.\n");
        return 1;
    }

    // pilha 1 recebe 3 elementos; pilha 2 recebe o resto ate encher (MAX = 10)
    for (int i = 1; i <= 3; i++) {
        empilhar(p, 1, i);
    }
    int quantidade = 0;
    while (empilhar(p, 2, 100 + quantidade)) {
        quantidade++;
    }
    printf("Pilha 2 recebeu %d elementos antes de a estrutura encher.\n", quantidade);

    if (!empilhar(p, 1, 4)) {
        printf("Estrutura cheia: os dois topos se encontraram.\n");
    }

    Item x;
    printf("Desempilhando pilha 1: ");
    while (desempilhar(p, 1, &x)) {
        printf("%d ", x);
    }
    printf("\nDesempilhando pilha 2: ");
    while (desempilhar(p, 2, &x)) {
        printf("%d ", x);
    }
    printf("\n");

    printf("Pilha 1 vazia? %s\n", pilhaVazia(p, 1) ? "sim" : "nao");
    printf("Pilha 2 vazia? %s\n", pilhaVazia(p, 2) ? "sim" : "nao");

    destruirPilhaDupla(p);
    return 0;
}
