#include <stdio.h>

const int *busca(const int *vetor, int x, int n){
    for(int i=0; i < n ; i++){
        if(vetor[i] == x){
            return &vetor[i];
        }
    }
    return NULL;
}

int main(void){
    int n;
    printf("Insira a quantidade de numero :\n");
    scanf("%d",&n);

    int vetor[n];
    for(int i=0;i < n ;i++){
        printf("Insira o numero da vez %d: \n",i + 1);
        scanf("%d",&vetor[i]);
    }

    int x;
    printf("Qual valor procurar : \n");
    scanf("%d",&x);

    const int *p = busca(vetor,x,n);

    if(p != NULL){
        int indice = p - vetor;
        printf("Encontrado no índice %d\n", indice);
    }
    else{
        printf("Elemento nao encontrado\n");
    }
}