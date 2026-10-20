#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>

typedef int Item;
typedef struct pilha *Pilha;

Pilha criarPilha(void);
bool destruirPilha(Pilha p);
bool empilhar(Pilha p, Item x);
bool desempilhar(Pilha p, Item *x);
bool consultartopo(Pilha p, Item *x);
bool pilhaVazia(Pilha p);
void pilhaCheia(Pilha p);

#endif 