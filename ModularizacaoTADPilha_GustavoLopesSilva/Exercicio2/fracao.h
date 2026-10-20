#ifndef FRACAO_H
#define FRACAO_H

typedef struct fracao *Fracao;

Fracao criarFracao(int numerador, int denominador);
void destruirFracao(Fracao f);
Fracao somarFracoes(Fracao a, Fracao b);
Fracao multiplicarFracoes(Fracao a, Fracao b);
void exibirFracao(Fracao f);

#endif
