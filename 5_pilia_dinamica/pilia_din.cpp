#include <iostream>
#include <cstddef>
#include "pilia_din.h"

using namespace std;

Pilia_dinamica::Pilia_dinamica() {
    topo = NULL;
}
Pilia_dinamica::~Pilia_dinamica() {
    No *temp;
    while (temp) {
        temp = topo;
        topo = topo->proximo;
        delete temp;
    }
}
bool Pilia_dinamica::esta_vazio() {
    return topo == NULL;
}
bool Pilia_dinamica::esta_cheio() {
    No *no_novo;
    try {
        no_novo = new No();
        delete no_novo;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}
void Pilia_dinamica::inserir(TipoItem item) {
    if (esta_cheio()) {
        printf("A Pilia esta chaia, imossivel inserir!");
        } else {
            No *no_novo = new No;
            no_novo->valor = item;
            no_novo->proximo = topo;
            topo = no_novo;
        }
}
TipoItem Pilia_dinamica::remover() {
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
void Pilia_dinamica::imprimir() {
    No *temp = topo;
    printf("Pilia dinamica [ ");
    while (temp) {
        cout << temp->valor << ' ';
        temp = temp->proximo;
    }
    printf("]\n");
}