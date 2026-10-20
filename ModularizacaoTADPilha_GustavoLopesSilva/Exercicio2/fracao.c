#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

struct fracao {
    int numerador;
    int denominador;
};

// static: so pode ser usada dentro deste arquivo (nao faz parte da interface)
static int mdc(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

Fracao criarFracao(int numerador, int denominador) {
    if (denominador == 0) {
        return NULL;
    }

    Fracao f = malloc(sizeof(struct fracao));
    if (f == NULL) {
        return NULL;
    }

    // o sinal fica sempre no numerador
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }

    int divisor = mdc(numerador, denominador);
    f->numerador = numerador / divisor;
    f->denominador = denominador / divisor;
    return f;
}

void destruirFracao(Fracao f) {
    free(f);
}

Fracao somarFracoes(Fracao a, Fracao b) {
    int num = a->numerador * b->denominador + b->numerador * a->denominador;
    int den = a->denominador * b->denominador;
    return criarFracao(num, den);
}

Fracao multiplicarFracoes(Fracao a, Fracao b) {
    int num = a->numerador * b->numerador;
    int den = a->denominador * b->denominador;
    return criarFracao(num, den);
}

void exibirFracao(Fracao f) {
    printf("%d/%d", f->numerador, f->denominador);
}
