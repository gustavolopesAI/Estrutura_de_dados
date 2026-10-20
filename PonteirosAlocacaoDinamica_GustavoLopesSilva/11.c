#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    double nota1;
    double nota2;
} Aluno;

Aluno *melhor_aluno(Aluno *alunos, int n) {
    Aluno *melhor = &alunos[0];

    for (int i = 1; i < n; i++) {
        double media_atual = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        double media_melhor = (melhor->nota1 + melhor->nota2) / 2.0;

        if (media_atual > media_melhor) {
            melhor = &alunos[i];
        }
    }

    return melhor;
}

Aluno *aprovados(Aluno *alunos, int n, int *qtd) {
    Aluno *resultado = malloc(n * sizeof(Aluno));

    if (resultado == NULL) {
        *qtd = 0;
        return NULL;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        double media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        if (media >= 6.0) {
            resultado[count] = alunos[i];
            count++;
        }
    }

    *qtd = count;
    return resultado;
}

int main(void) {
    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);
    getchar();

    Aluno *alunos = malloc(n * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota 1: ");
        scanf("%lf", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%lf", &alunos[i].nota2);

        getchar();
    }

    Aluno *melhor = melhor_aluno(alunos, n);
    printf("\nMelhor aluno: %s (matricula %d)\n", melhor->nome, melhor->matricula);

    int qtd;
    Aluno *lista_aprovados = aprovados(alunos, n, &qtd);

    printf("\nAlunos aprovados (media >= 6.0): %d\n", qtd);
    for (int i = 0; i < qtd; i++) {
        printf("%s (matricula %d)\n", lista_aprovados[i].nome, lista_aprovados[i].matricula);
    }

    free(alunos);
    free(lista_aprovados);
    alunos = NULL;
    lista_aprovados = NULL;

    return 0;
}