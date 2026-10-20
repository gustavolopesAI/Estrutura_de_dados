#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

double distancia(Ponto a, Ponto b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}

Ponto ponto_medio(Ponto a, Ponto b) {
    Ponto medio;
    medio.x = (a.x + b.x) / 2.0;
    medio.y = (a.y + b.y) / 2.0;
    return medio;
}

int main(void) {
    Ponto p1, p2, medio;

    printf("Digite as coordenadas x e y do primeiro ponto: ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Digite as coordenadas x e y do segundo ponto: ");
    scanf("%lf %lf", &p2.x, &p2.y);

    printf("\nDistancia Euclidiana entre os pontos: %.2f\n", distancia(p1, p2));

    medio = ponto_medio(p1, p2);
    printf("Ponto medio: (%.2f, %.2f)\n", medio.x, medio.y);

    return 0;
}
