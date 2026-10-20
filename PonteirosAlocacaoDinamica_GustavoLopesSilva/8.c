#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copia_cadeia(const char *origem) {
    int tamanho = strlen(origem) + 1;
    char *copia = malloc(tamanho * sizeof(char));

    if (copia == NULL) {
        return NULL;
    }

    char *p = copia;
    const char *q = origem;

    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';

    return copia;
}

int main(void) {
    char original[100];

    printf("Digite uma cadeia: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    char *copia = copia_cadeia(original);

    if (copia == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    free(copia);
    copia = NULL;

    return 0;
}