#include <iostream>
#include <cstddef>
#include "pilha_din.h"

using namespace std;

Pilha_dinamica::Pilha_dinamica() {
    topo = NULL;
}
Pilha_dinamica::~Pilha_dinamica() {
    No *temp;
    while (temp) {
        temp = topo;
        topo = topo->proximo;
        delete temp;
    }
}
bool Pilha_dinamica::esta_vazio() {
    return topo == NULL;
}
bool Pilha_dinamica::esta_cheio() {
    No *no_novo;
    try {
        no_novo = new No();
        delete no_novo;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}
void Pilha_dinamica::inserir(TipoItem item) {
    if (esta_cheio()) {
        printf("A Pilia esta chaia, imossivel inserir!");
        } else {
            No *no_novo = new No;
            no_novo->valor = item;
            no_novo->proximo = topo;
            topo = no_novo;
        }
}
TipoItem Pilha_dinamica::remover() {
    if (esta_vazio()) {
        printf("A pilia esta vazia, impossivel remover!");
        return  0;
    } else {
        No *temp = topo;
        topo = topo->proximo;
        TipoItem item = temp->valor;
        delete temp;
        return item;
    }
}
void Pilha_dinamica::imprimir() {
    No *temp = topo;
    printf("Pilia dinamica [ ");
    while (temp) {
        cout << temp->valor << ' ';
        temp = temp->proximo;
    }
    printf("]\n");
}