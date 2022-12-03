#ifndef PILHA_DIN_H
#define PILHA_DIN_H

typedef int TipoItem;

struct No {
    TipoItem valor;
    No *proximo;
};

class Pilha_dinamica  {
    No *topo;
    public:
        Pilha_dinamica();
        ~Pilha_dinamica();
        bool esta_vazio();
        bool esta_cheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};

#endif