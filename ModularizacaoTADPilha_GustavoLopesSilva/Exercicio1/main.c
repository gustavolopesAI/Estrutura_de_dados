#include <stdio.h>
#include "pontos.h"
#include "geometria.h"

int main(void) {
    Ponto vertices[3];

    printf("Informe os 3 vertices do triangulo.\n");
    for (int i = 0; i < 3; i++) {
        printf("Coordenada X do ponto %d: ", i + 1);
        scanf("%lf", &vertices[i].x);
        printf("Coordenada Y do ponto %d: ", i + 1);
        scanf("%lf", &vertices[i].y);
    }

    printf("\nLado P1-P2: %.2f\n", distancia(vertices[0], vertices[1]));
    printf("Lado P2-P3: %.2f\n", distancia(vertices[1], vertices[2]));
    printf("Lado P3-P1: %.2f\n", distancia(vertices[2], vertices[0]));
    printf("Perimetro: %.2f\n", perimetroTriangulo(vertices[0], vertices[1], vertices[2]));

    return 0;
}
