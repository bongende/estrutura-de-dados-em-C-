#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila() {
    primeiro = 0;
    ultimo = 0;
    estrutura = new TypoItem[max_itens];
}
Fila::~Fila() {
    delete [] estrutura;
}
bool Fila::esta_vasio() {
    return primeiro == ultimo; 
}
bool Fila::esta_cheio() {
    return ultimo - primeiro == max_itens;
}
void Fila::inserir(TypoItem item) {
    if (esta_cheio()) {
        printf("impossivel inserir, a fila est cheia!\n");
        return;
        } else {
        estrutura[ultimo % max_itens] = item;
        ++ultimo;
    }
}
TypoItem Fila::remover() {
    if (esta_vasio()) {
        printf("Impossivel remover, a fila esta vazia!\n");
        return 0;
    } else {
        ++primeiro;
        return estrutura[(primeiro -  1 ) % max_itens];
    }
}
void Fila::imprimir() {
    printf("Fila :\t[ ");
    for (int i=primeiro; i<ultimo; ++i) {
        cout << estrutura[i % max_itens] << " -> ";
    }
    printf(" ]\n");
}