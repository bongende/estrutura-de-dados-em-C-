#ifndef FILA_DIN_H
#define FILA_DIN_H

typedef int TipoItem;

struct No {
    TipoItem valor;
    No *previo;
    No *proximo;
};

class Fila_dinamica {

    public:
        Fila_dinamica();
        ~Fila_dinamica();
};

#endif