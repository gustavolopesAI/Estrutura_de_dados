#include <stdio.h>

int meu_strlen(const char *str) {
    int contador = 0;
    while (str[contador] != '\0') {
        contador++;
    }
    return contador;
}

int main(void) {
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    
    int i = 0;
    while (frase[i] != '\0') {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
        i++;
    }

    printf("Comprimento da frase: %d\n", meu_strlen(frase));

    return 0;
}
