#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 < ano2) {
        printf("A primeira data ocorreu primeiro\n");
    } else if (ano1 > ano2) {
        printf("A segunda data ocorreu primeiro\n");
    } else {
        if (mes1 < mes2) {
            printf("A primeira data ocorreu primeiro\n");
        } else if (mes1 > mes2) {
            printf("A segunda data ocorreu primeiro\n");
        } else {
            if (dia1 < dia2) {
                printf("A primeira data ocorreu primeiro\n");
            } else if (dia1 > dia2) {
                printf("A segunda data ocorreu primeiro\n");
            } else {
                printf("As datas sao iguais\n");
            }
        }
    }

    return 0;
}
