#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <stdbool.h>

#define MAX 100

typedef struct conjunto *ConjuntoInteiros;

ConjuntoInteiros criarConjunto(void);
void destruirConjunto(ConjuntoInteiros c);
bool inserir(ConjuntoInteiros c, int x);
bool remover(ConjuntoInteiros c, int x);
bool pertence(ConjuntoInteiros c, int x);
int cardinalidade(ConjuntoInteiros c);

#endif
