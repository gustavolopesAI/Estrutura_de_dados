#include <stdio.h>
#include <math.h>

void exibeMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

double potenciacao(double a, double b) {
    return pow(a, b);
}

int main(void) {
    int opcao;
    double a, b, resultado;

    do {
        exibeMenu();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%lf", &a);
        printf("Digite o segundo numero: ");
        scanf("%lf", &b);

        switch (opcao) {
            case 1:
                resultado = soma(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                resultado = potenciacao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
        }

    } while (opcao != 0);

    return 0;
}
