#include <stdio.h>
#include <string.h>

#define MAX_NOMES 100
#define TAM_NOME 100

int main(void) {
    char nomes[MAX_NOMES][TAM_NOME];
    int n, i;
    int indice_mais_longo = 0;
    int indice_primeiro_alfabetico = 0;

    printf("Digite o numero de nomes: ");
    scanf("%d", &n);
    getchar(); 

    for (i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], TAM_NOME, stdin);

       
        int len = strlen(nomes[i]);
        if (len > 0 && nomes[i][len - 1] == '\n') {
            nomes[i][len - 1] = '\0';
        }
    }

    for (i = 1; i < n; i++) {
        if (strlen(nomes[i]) > strlen(nomes[indice_mais_longo])) {
            indice_mais_longo = i;
        }
        if (strcmp(nomes[i], nomes[indice_primeiro_alfabetico]) < 0) {
            indice_primeiro_alfabetico = i;
        }
    }

    printf("\nNome mais longo: %s\n", nomes[indice_mais_longo]);
    printf("Primeiro em ordem alfabetica: %s\n", nomes[indice_primeiro_alfabetico]);

    return 0;
}
