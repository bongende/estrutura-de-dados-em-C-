#ifndef PILHA_H
#define PILHA_H

typedef int TipoItem;
const int max_itens{100};

class Pilha {
    int tamanho;
    TipoItem *estrutura;
    public:
        Pilha();
        ~Pilha();
        bool esta_cheia();
        bool esta_vazia();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
        int qual_tamanho();
};

#endif