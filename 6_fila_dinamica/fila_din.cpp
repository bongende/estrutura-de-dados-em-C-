#include <iostream>
#include <cstddef>
#include "fila_din.h"

using namespace std;

Fila_dinamica::Fila_dinamica() {
    primeiro = NULL;
    ultimo = NULL;
}
Fila_dinamica::~Fila_dinamica() {
    No *temp;
    while (primeiro) {
        temp = primeiro;
        primeiro = primeiro->proximo;
        delete temp;
    }
    ultimo = NULL;
    printf("Fila deletada!\n");
}
bool Fila_dinamica::esta_vazio() {
    return primeiro == NULL;
}
bool Fila_dinamica::esta_cheio() {
    No *no_novo;
    try {
        no_novo = new No();
        delete no_novo;
        return false;
    } catch (bad_alloc exception) {
        return true;
    }
}
void Fila_dinamica::inserir(TipoItem item) {
    if (esta_cheio()) {
        printf("A fila esta cheia, impossivel inserir!\n");
    } else {
        No *no_novo = new No();
        no_novo->valor = item;
        no_novo->proximo = NULL;
        if (!primeiro) {
            primeiro = no_novo;
        } else {
        ultimo->proximo = no_novo;
        }
        ultimo = no_novo;
    }
}
TipoItem Fila_dinamica::remover() {
    if (esta_vazio()) {
        printf("A fila esta vazia, impossivel remover!\n");
        return 0;
    } else {
        No *temp = primeiro;
        TipoItem valor = temp->valor;
        primeiro = primeiro->proximo;
        if (!primeiro) ultimo = NULL;
        delete temp;
        return valor;
    }
}
void Fila_dinamica::imprimir() {
    No *temp = primeiro;
    printf("Fila dinamica [ ");
    while (temp) {
        cout << temp->valor << ' ';
        temp = temp->proximo;
    }
    printf("]\n");
}