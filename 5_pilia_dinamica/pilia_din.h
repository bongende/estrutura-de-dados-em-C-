#ifndef PILIA_DIN_H
#define PILIA_DIN_H

typedef int TipoItem;

struct No {
    TipoItem valor;
    No *proximo;
};

class Pilia_dinamica  {
    No *topo;
    public:
        Pilia_dinamica();
        ~Pilia_dinamica();
        bool esta_vazio();
        bool esta_cheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};

#endif