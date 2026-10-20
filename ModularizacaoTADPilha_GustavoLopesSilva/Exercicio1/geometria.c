#include "geometria.h"

double perimetroTriangulo(Ponto a, Ponto b, Ponto c) {
    return distancia(a, b) + distancia(b, c) + distancia(c, a);
}
