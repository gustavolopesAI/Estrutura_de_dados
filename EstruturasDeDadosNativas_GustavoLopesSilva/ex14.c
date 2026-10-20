#include <stdio.h>

#define TAM_MAX 500

int main(void) {
    char frase[TAM_MAX];
    int i;
    int contador_palavras = 0;
    int dentro_de_palavra = 0;
    char c;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        c = frase[i];

        if (c == ' ' || c == '\t' || c == '\n') {
            dentro_de_palavra = 0;
        } else if (!dentro_de_palavra) {
            dentro_de_palavra = 1;
            contador_palavras++;
        }
    }

    printf("\nA frase possui %d palavra(s).\n", contador_palavras);

    return 0;
}
