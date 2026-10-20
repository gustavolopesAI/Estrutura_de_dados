#include <stdio.h>
#include "pilha.h"

bool palindromo(char *cadeia) {
    Pilha p = criarPilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return false;
    }

    // empilha todos os caracteres
    for (int i = 0; cadeia[i] != '\0'; i++) {
        empilhar(p, cadeia[i]);
    }

    // o desempilhado vem do fim; compara com a cadeia a partir do inicio
    bool resultado = true;
    Item c;
    int i = 0;
    while (desempilhar(p, &c)) {
        if (c != cadeia[i]) {
            resultado = false;
            break;
        }
        i++;
    }

    destruirPilha(p);
    return resultado;
}

int main(void) {
    char palavra[MAX];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (palindromo(palavra)) {
        printf("\"%s\" e um palindromo.\n", palavra);
    } else {
        printf("\"%s\" nao e um palindromo.\n", palavra);
    }

    return 0;
}
