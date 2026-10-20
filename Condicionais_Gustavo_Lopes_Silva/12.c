#include <stdio.h>

int main() {
    int mes, dias;
    char nome[20];

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido\n");
        return 0;
    }

    switch (mes) {
        case 1:  sprintf(nome, "Janeiro");   break;
        case 2:  sprintf(nome, "Fevereiro"); break;
        case 3:  sprintf(nome, "Marco");     break;
        case 4:  sprintf(nome, "Abril");     break;
        case 5:  sprintf(nome, "Maio");      break;
        case 6:  sprintf(nome, "Junho");     break;
        case 7:  sprintf(nome, "Julho");     break;
        case 8:  sprintf(nome, "Agosto");    break;
        case 9:  sprintf(nome, "Setembro");  break;
        case 10: sprintf(nome, "Outubro");   break;
        case 11: sprintf(nome, "Novembro");  break;
        case 12: sprintf(nome, "Dezembro");  break;
    }

    /* Agrupamento de casos: meses com a mesma quantidade de dias
       compartilham o mesmo bloco de codigo */
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            dias = 28;
            break;
    }

    printf("Mes: %s\n", nome);
    printf("Quantidade de dias: %d\n", dias);

    return 0;
}
