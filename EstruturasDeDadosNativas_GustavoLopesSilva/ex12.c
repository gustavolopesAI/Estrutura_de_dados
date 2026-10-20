#include <stdio.h>
#include <ctype.h>

int main(void) {
    char frase[500];
    int i;
    int vogais = 0, consoantes = 0, digitos = 0, espacos = 0;
    char c;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        c = tolower((unsigned char) frase[i]);

        if (c == '\n') {
            continue;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if (isalpha((unsigned char) c)) {
            consoantes++;
        } else if (isdigit((unsigned char) c)) {
            digitos++;
        } else if (c == ' ' || c == '\t') {
            espacos++;
        }
    }

    printf("\nVogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Digitos: %d\n", digitos);
    printf("Espacos em branco: %d\n", espacos);

    return 0;
}
