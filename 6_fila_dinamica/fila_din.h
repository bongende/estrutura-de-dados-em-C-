#ifndef FILA_DIN_H
#define FILA_DIN_H

typedef int TipoItem;

struct No {
    TipoItem valor;
    No *proximo;
};

class Fila_dinamica {
    No *primeiro;
    No *ultimo;
    public:
        Fila_dinamica();
        ~Fila_dinamica();
        bool esta_vazio();
        bool esta_cheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};

#endif