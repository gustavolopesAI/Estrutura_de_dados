#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantas notas? ");
    scanf("%d", &n);

    int *frequencia = calloc(11, sizeof(int));

    if (frequencia == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int nota;
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &nota);
        frequencia[nota]++;
    }

    printf("Notas com pelo menos uma ocorrencia:\n");
    for (int nota = 0; nota <= 10; nota++) {
        if (frequencia[nota] > 0) {
            printf("Nota %d: %d vez(es)\n", nota, frequencia[nota]);
        }
    }

    free(frequencia);
    frequencia = NULL;

    return 0;
}