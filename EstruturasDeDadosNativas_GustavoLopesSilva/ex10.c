#include <stdio.h>

#define LADO 3


char verifica_vencedor(char tabuleiro[LADO][LADO]) {
    int i;

    /* Verifica linhas */
    for (i = 0; i < LADO; i++) {
        if (tabuleiro[i][0] != ' ' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
    }

    /* Verifica colunas */
    for (i = 0; i < LADO; i++) {
        if (tabuleiro[0][i] != ' ' &&
            tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i]) {
            return tabuleiro[0][i];
        }
    }

    /* Verifica diagonal principal */
    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }

    /* Verifica diagonal secundaria */
    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }

    return ' ';
}

void imprime_tabuleiro(char tabuleiro[LADO][LADO]) {
    int i, j;
    for (i = 0; i < LADO; i++) {
        for (j = 0; j < LADO; j++) {
            printf("[%c]", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    char tabuleiro[LADO][LADO];
    int i, j;
    char vencedor;

    printf("Digite os 9 caracteres do tabuleiro (X, O ou espaco),\n");
    printf("linha por linha, separados por espaco (use '_' para representar espaco vazio):\n");

    for (i = 0; i < LADO; i++) {
        for (j = 0; j < LADO; j++) {
            char c;
            scanf(" %c", &c);
            tabuleiro[i][j] = (c == '_') ? ' ' : c;
        }
    }

    printf("\nTabuleiro:\n");
    imprime_tabuleiro(tabuleiro);

    vencedor = verifica_vencedor(tabuleiro);

    if (vencedor != ' ') {
        printf("\nHa um vencedor: %c\n", vencedor);
    } else {
        printf("\nNao ha vencedor.\n");
    }

    return 0;
}
