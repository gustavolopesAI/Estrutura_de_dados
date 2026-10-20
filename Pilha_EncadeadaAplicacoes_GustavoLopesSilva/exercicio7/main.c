#include <stdio.h>
#include "pilha.h"

bool avaliarPosFixa(char *expressao, int *resultado) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return false;
    }

    int i = 0;
    while (expressao[i] != '\0') {
        char c = expressao[i];

        if (c >= '0' && c <= '9') {
            // monta o numero com todos os digitos
            int numero = 0;
            while (expressao[i] >= '0' && expressao[i] <= '9') {
                numero = numero * 10 + (expressao[i] - '0');
                i++;
            }
            empilhar(p, numero);
            continue;
        }

        if (c == '+' || c == '-' || c == '*' || c == '/') {
            Item a, b;
            // precisa de dois operandos
            if (!desempilhar(p, &b) || !desempilhar(p, &a)) {
                destruirPilha(p);
                return false;
            }

            if (c == '+') {
                empilhar(p, a + b);
            } else if (c == '-') {
                empilhar(p, a - b);
            } else if (c == '*') {
                empilhar(p, a * b);
            } else {
                if (b == 0) {
                    destruirPilha(p);
                    return false;
                }
                empilhar(p, a / b);
            }
        }

        i++;
    }

    // deve sobrar exatamente um valor
    Item valor;
    if (!desempilhar(p, &valor) || !pilhaVazia(p)) {
        destruirPilha(p);
        return false;
    }

    *resultado = valor;
    destruirPilha(p);
    return true;
}

int main(void) {
    char *expressoes[] = {"12 3 4 * +", "100 7 5 - /", "3 +", "2 3 4 +"};
    int resultado;

    for (int i = 0; i < 4; i++) {
        if (avaliarPosFixa(expressoes[i], &resultado)) {
            printf("%s: resultado %d\n", expressoes[i], resultado);
        } else {
            printf("%s: mal formada\n", expressoes[i]);
        }
    }

    return 0;
}
