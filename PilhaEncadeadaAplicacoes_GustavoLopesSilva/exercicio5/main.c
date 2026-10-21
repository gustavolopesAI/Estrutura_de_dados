#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha p1 = criarPilha();
    Pilha p2 = criarPilha();
    if (p1 == NULL || p2 == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 1;
    }

    empilhar(p1, 10);
    empilhar(p1, 20);
    empilhar(p1, 30);

    empilhar(p2, 1);
    empilhar(p2, 2);
    empilhar(p2, 3);

    printf("Primeira pilha: ");
    exibirPilha(p1);
    printf("Segunda pilha: ");
    exibirPilha(p2);

    concatenarPilhas(p1, p2);

    printf("Depois de concatenar:\n");
    printf("Primeira pilha: ");
    exibirPilha(p1);
    printf("Segunda pilha vazia? %s\n", pilhaVazia(p2) ? "sim" : "nao");

    destruirPilha(p1);
    destruirPilha(p2);
    return 0;
}
