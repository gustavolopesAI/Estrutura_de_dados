#include <stdio.h>
#include <string.h>
#include "pilha.h"

int avaliarPreFixa(char *expressao) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 0;
    }

    // percorre da direita para a esquerda
    for (int i = strlen(expressao) - 1; i >= 0; i--) {
        char c = expressao[i];

        if (c >= '0' && c <= '9') {
            empilhar(p, c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            Item a, b;
            // o primeiro desempilhado e o operando da esquerda
            desempilhar(p, &a);
            desempilhar(p, &b);

            if (c == '+') {
                empilhar(p, a + b);
            } else if (c == '-') {
                empilhar(p, a - b);
            } else if (c == '*') {
                empilhar(p, a * b);
            } else {
                empilhar(p, a / b);
            }
        }
    }

    Item resultado;
    desempilhar(p, &resultado);
    destruirPilha(p);
    return resultado;
}

int main(void) {
    char *expressoes[] = {"- + 5 * 3 2 4", "/ - 9 3 2"};

    for (int i = 0; i < 2; i++) {
        printf("%s: resultado %d\n", expressoes[i], avaliarPreFixa(expressoes[i]));
    }

    return 0;
}
