#include <stdio.h>
#include <stdlib.h>


int **transposta(int **elemento, int nl, int nc) {

    int **t = malloc(nc * sizeof(int *));
    for (int i = 0; i < nc; i++) {
        t[i] = malloc(nl * sizeof(int));
    }

    for (int a = 0; a < nl; a++) {
        for (int b = 0; b < nc; b++) {
            t[b][a] = elemento[a][b];
        }
    }

    return t;
}

int main(void) {
    printf("Esse programa cria a matriz transposta para a sua matriz\n");

    int nl;
    printf("Insira a quantidade de linhas da sua matriz: ");
    scanf("%d", &nl);

    int nc;
    printf("Insira a quantidade de colunas da sua matriz: ");
    scanf("%d", &nc);

    int **elemento = malloc(nl * sizeof(int *));
    for (int k = 0; k < nl; k++) {
        elemento[k] = malloc(nc * sizeof(int));
    }

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("Insira o elemento da %dº linha e %dº coluna: ", i + 1, j + 1);
            scanf("%d", &elemento[i][j]);
        }
    }

    int **t = transposta(elemento, nl, nc);

    printf("\nMatriz original:\n");
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%d ", elemento[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < nc; i++) {
        for (int j = 0; j < nl; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    for (int k = 0; k < nl; k++) {
        free(elemento[k]);
    }
    free(elemento);

    for (int i = 0; i < nc; i++) {
        free(t[i]);
    }
    free(t);

    return 0;
}