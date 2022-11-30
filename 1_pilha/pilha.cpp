#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha() {
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}
Pilha::~Pilha() {
    delete [] estrutura;
}
bool Pilha::esta_cheia() {
    return (tamanho == max_itens);
}
bool Pilha::esta_vazia() {
    return (tamanho == 0);
}
void Pilha::inserir(TipoItem item) {
    if (esta_cheia()) {
        cout << "Nao é possivel inserir, a Pilha esta cheia" << endl;
    } else {
        estrutura[tamanho] = item;
        tamanho++;
    }
}
TipoItem Pilha::remover() {
    if (esta_vazia()) {
        cout << "impossivel remover, a Pilha esta vasia" << endl;
        return 0;
    } else {
        TipoItem temp = estrutura[tamanho - 1];
        tamanho--;
        return temp;
    }
}
void Pilha::imprimir() {
    cout << "pilha : [ ";
    for (int i=0; i < tamanho; i++ ) {
        cout << estrutura[i] << ", ";
    }
    cout << "]" << endl;
}
int Pilha::qual_tamanho() {
    return tamanho;
}
