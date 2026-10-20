#include <stdio.h>
#include <string.h>

void inverte_cadeia(char *cadeia) {
    char *inicio = cadeia;                    
    char *fim = cadeia + strlen(cadeia) - 1;   

    while (inicio < fim) {
        char temp = *inicio;   
        *inicio = *fim;        
        *fim = temp;           
        inicio++;   
        fim--;      
    }
}

int main(void) {
    char cadeia[100];

    printf("Digite uma palavra ou frase: ");
    fgets(cadeia, sizeof(cadeia), stdin);

    cadeia[strcspn(cadeia, "\n")] = '\0';

    inverte_cadeia(cadeia);

    printf("Cadeia invertida: %s\n", cadeia);

    return 0;
}