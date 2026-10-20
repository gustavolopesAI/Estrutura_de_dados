#include <stdio.h>
#include <stdlib.h>

int *cria_vetor(int n){
    int *vetor = malloc(n * sizeof(int));

    if(vetor == NULL){
        return NULL;
    }

    for(int i = 0; i < n; i++){
        vetor[i] = (i + 1) * 3;
    }

    return vetor;
}

int main(void){
    int n;
    printf("Quantos multiplos de 3");
    scanf("%d",&n);

    int *vetor = cria_vetor(n);

    if(vetor == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;

}