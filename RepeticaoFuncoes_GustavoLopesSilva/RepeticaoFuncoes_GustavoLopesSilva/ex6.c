#include <stdio.h>

int main(void) {
    int num;

    printf("Digite numeros inteiros (um multiplo de 9 encerra a leitura):\n");
    scanf("%d", &num);

    while (num % 9 != 0) {
        if (num % 5 == 0) {
            printf("%d e multiplo de 5\n", num);
        } else {
            printf("%d nao e multiplo de 5\n", num);
        }
        scanf("%d", &num);
    }

    return 0;
}
