#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

typedef struct {
    char nome[100];
    int matricula;
    double nota1;
    double nota2;
} Aluno;

double media_aluno(Aluno a) {
    return (a.nota1 + a.nota2) / 2.0;
}

int main(void) {
    Aluno alunos[MAX_ALUNOS];
    int n, i;
    int indiceMaiorMedia = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        int len = strlen(alunos[i].nome);
        if (len > 0 && alunos[i].nome[len - 1] == '\n') {
            alunos[i].nome[len - 1] = '\0';
        }

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota 1: ");
        scanf("%lf", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%lf", &alunos[i].nota2);

        getchar();
    }

    for (i = 1; i < n; i++) {
        if (media_aluno(alunos[i]) > media_aluno(alunos[indiceMaiorMedia])) {
            indiceMaiorMedia = i;
        }
    }

    printf("\n--- Medias dos alunos ---\n");
    for (i = 0; i < n; i++) {
        printf("%s - Media: %.2f\n", alunos[i].nome, media_aluno(alunos[i]));
    }

    printf("\n--- Alunos aprovados (media >= 6,0) ---\n");
    for (i = 0; i < n; i++) {
        if (media_aluno(alunos[i]) >= 6.0) {
            printf("%s\n", alunos[i].nome);
        }
    }

    printf("\nAluno com a maior media: %s (%.2f)\n",
           alunos[indiceMaiorMedia].nome, media_aluno(alunos[indiceMaiorMedia]));

    return 0;
}
