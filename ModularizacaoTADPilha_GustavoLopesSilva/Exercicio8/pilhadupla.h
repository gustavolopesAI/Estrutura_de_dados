#ifndef PILHADUPLA_H
#define PILHADUPLA_H

#include <stdbool.h>

#define MAX 10

typedef int Item;
typedef struct pilhaDupla *PilhaDupla;

// nas operacoes abaixo, o parametro "qual" indica a pilha: 1 ou 2
PilhaDupla criarPilhaDupla(void);
void destruirPilhaDupla(PilhaDupla p);
bool empilhar(PilhaDupla p, int qual, Item x);
bool desempilhar(PilhaDupla p, int qual, Item *x);
bool pilhaVazia(PilhaDupla p, int qual);

#endif
