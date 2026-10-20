#include <stdio.h>
#include <ctype.h>

#define TAM_MAX 500

int main(void) {
    char frase[TAM_MAX];
    char limpa[TAM_MAX];
    int i, tamanho_limpo = 0;
    int inicio, fim;
    int palindromo = 1;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    for (i = 0; frase[i] != '\0'; i++) {
        if (isalnum((unsigned char) frase[i])) {
            limpa[tamanho_limpo++] = tolower((unsigned char) frase[i]);
        }
    }
    limpa[tamanho_limpo] = '\0';

    inicio = 0;
    fim = tamanho_limpo - 1;

    while (inicio < fim) {
        if (limpa[inicio] != limpa[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo) {
        printf("\nA frase E um palindromo.\n");
    } else {
        printf("\nA frase NAO e um palindromo.\n");
    }

    return 0;
}
