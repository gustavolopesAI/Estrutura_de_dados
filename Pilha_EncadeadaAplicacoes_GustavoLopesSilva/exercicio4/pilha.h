#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>

typedef int Item;
typedef struct pilha *Pilha;

Pilha criarPilha(void);
void destruirPilha(Pilha p);
bool empilhar(Pilha p, Item x);
bool desempilhar(Pilha p, Item *x);
bool consultarTopo(Pilha p, Item *x);
bool pilhaVazia(Pilha p);
void exibirPilha(Pilha p);
void esvaziarPilha(Pilha p);

#endif
