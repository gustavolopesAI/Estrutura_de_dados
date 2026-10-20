#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    char cargo[100];
    double salario;
    Data dataAdmissao;
} Funcionario;

int compara_datas(Data d1, Data d2) {
    if (d1.ano != d2.ano) {
        return d1.ano - d2.ano;
    }
    if (d1.mes != d2.mes) {
        return d1.mes - d2.mes;
    }
    return d1.dia - d2.dia;
}

int main(void) {
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    int n, i;
    Data dataLimite;
    int indiceMaisAntigo = 0;

    printf("Digite o numero de funcionarios: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nFuncionario %d:\n", i + 1);

        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        int len = strlen(funcionarios[i].nome);
        if (len > 0 && funcionarios[i].nome[len - 1] == '\n') {
            funcionarios[i].nome[len - 1] = '\0';
        }

        printf("Cargo: ");
        fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);
        len = strlen(funcionarios[i].cargo);
        if (len > 0 && funcionarios[i].cargo[len - 1] == '\n') {
            funcionarios[i].cargo[len - 1] = '\0';
        }

        printf("Salario: ");
        scanf("%lf", &funcionarios[i].salario);

        printf("Data de admissao (dia mes ano): ");
        scanf("%d %d %d", &funcionarios[i].dataAdmissao.dia,
                          &funcionarios[i].dataAdmissao.mes,
                          &funcionarios[i].dataAdmissao.ano);
        getchar();
    }

    for (i = 1; i < n; i++) {
        if (compara_datas(funcionarios[i].dataAdmissao,
                           funcionarios[indiceMaisAntigo].dataAdmissao) < 0) {
            indiceMaisAntigo = i;
        }
    }

    printf("\nDigite uma data limite (dia mes ano): ");
    scanf("%d %d %d", &dataLimite.dia, &dataLimite.mes, &dataLimite.ano);

    printf("\n--- Funcionarios admitidos antes de %02d/%02d/%04d ---\n",
           dataLimite.dia, dataLimite.mes, dataLimite.ano);
    for (i = 0; i < n; i++) {
        if (compara_datas(funcionarios[i].dataAdmissao, dataLimite) < 0) {
            printf("%s (admitido em %02d/%02d/%04d)\n",
                   funcionarios[i].nome,
                   funcionarios[i].dataAdmissao.dia,
                   funcionarios[i].dataAdmissao.mes,
                   funcionarios[i].dataAdmissao.ano);
        }
    }

    printf("\nFuncionario mais antigo da empresa: %s (admitido em %02d/%02d/%04d)\n",
           funcionarios[indiceMaisAntigo].nome,
           funcionarios[indiceMaisAntigo].dataAdmissao.dia,
           funcionarios[indiceMaisAntigo].dataAdmissao.mes,
           funcionarios[indiceMaisAntigo].dataAdmissao.ano);

    return 0;
}
