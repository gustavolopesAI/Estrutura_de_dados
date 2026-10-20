#include <stdio.h>

int main() {
    char jogadorA, jogadorB;

    printf("Escolha do jogador A (R-pedra, P-papel, S-tesoura): ");
    scanf(" %c", &jogadorA);
    printf("Escolha do jogador B (R-pedra, P-papel, S-tesoura): ");
    scanf(" %c", &jogadorB);

    switch (jogadorA) {
        case 'R':
            if (jogadorB == 'R') {
                printf("Empate\n");
            } else if (jogadorB == 'P') {
                printf("Jogador B venceu\n");
            } else if (jogadorB == 'S') {
                printf("Jogador A venceu\n");
            } else {
                printf("Escolha invalida\n");
            }
            break;
        case 'P':
            if (jogadorB == 'R') {
                printf("Jogador A venceu\n");
            } else if (jogadorB == 'P') {
                printf("Empate\n");
            } else if (jogadorB == 'S') {
                printf("Jogador B venceu\n");
            } else {
                printf("Escolha invalida\n");
            }
            break;
        case 'S':
            if (jogadorB == 'R') {
                printf("Jogador B venceu\n");
            } else if (jogadorB == 'P') {
                printf("Jogador A venceu\n");
            } else if (jogadorB == 'S') {
                printf("Empate\n");
            } else {
                printf("Escolha invalida\n");
            }
            break;
        default:
            printf("Escolha invalida\n");
    }

    return 0;
}
