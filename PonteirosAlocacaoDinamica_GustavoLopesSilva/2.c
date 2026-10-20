#include <stdio.h>

int soma_vetor(const int *v, int n) {
    int soma = 0;
    const int *p = v;       

    for (int i = 0; i < n; i++) {
        soma += *p;         
        p++;                 
    }

    return soma;
}

int main(void) {
    int n;
    printf("Quantos numeros? ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = soma_vetor(vetor, n);

    printf("Soma: %d\n", resultado);

    return 0;
}
