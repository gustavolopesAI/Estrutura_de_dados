#include <stdio.h>

#define QTD_NUMEROS 50
#define QTD_DIGITOS 10

int main(void) {
    int frequencia[QTD_DIGITOS] = {0};
    int i, digito, mais_frequente = 0;

    for (i = 0; i < QTD_NUMEROS; i++) {
        do {
            printf("Digite o %dº numero (0 a 9): ", i + 1);
            scanf("%d", &digito);
        } while (digito < 0 || digito > 9);

        frequencia[digito]++;
    }

    printf("\nDigito | Ocorrencias\n");
    for (i = 0; i < QTD_DIGITOS; i++) {
        printf("  %d    |     %d\n", i, frequencia[i]);
        if (frequencia[i] > frequencia[mais_frequente]) {
            mais_frequente = i;
        }
    }

    printf("\nDigito mais frequente: %d (com %d ocorrencias)\n",
           mais_frequente, frequencia[mais_frequente]);

    return 0;
}
