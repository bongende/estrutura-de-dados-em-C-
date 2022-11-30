#ifndef FILA_H
#define FILA_H

typedef int TypoItem;
const int max_itens = 10;

class Fila {
    int primeiro, ultimo;
    TypoItem *estrutura;

    public:
        Fila();
        ~Fila();
        bool esta_vasio();
        bool esta_cheio();
        void inserir(TypoItem item);
        TypoItem remover();
        void imprimir();
};

#endif