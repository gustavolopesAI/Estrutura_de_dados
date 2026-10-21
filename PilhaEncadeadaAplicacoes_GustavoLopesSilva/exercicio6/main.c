#include <stdio.h>
#include "pilha.h"

int posicaoErro(char *expressao) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return -1;
    }

    Item pos;
    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];

        if (c == '(' || c == '[' || c == '{') {
            empilhar(p, i); // guarda a posicao da abertura
        } else if (c == ')' || c == ']' || c == '}') {
            // fechamento sem abertura
            if (!desempilhar(p, &pos)) {
                destruirPilha(p);
                return i;
            }

            char abertura = expressao[pos];
            if ((c == ')' && abertura != '(') ||
                (c == ']' && abertura != '[') ||
                (c == '}' && abertura != '{')) {
                destruirPilha(p);
                return i;
            }
        }
    }

    // sobrou abertura: o topo e a mais recente
    int resultado = -1;
    if (consultarTopo(p, &pos)) {
        resultado = pos;
    }

    destruirPilha(p);
    return resultado;
}

int main(void) {
    char *expressoes[] = {"(a + [b)]", "a + b)", "((a + b)", "[a * (b + c)]"};

    for (int i = 0; i < 4; i++) {
        printf("%s: %d\n", expressoes[i], posicaoErro(expressoes[i]));
    }

    return 0;
}
