#include <iostream>
#include "fila.h"

using namespace std;

int main() {
    Fila fila;
    for (int i = 0; i< 12; ++i) {
        fila.inserir(i + 13);
    }
    fila.imprimir();
    cout << "===================================" << endl;
    for (int i=0; i< 5; ++i) {
        fila.remover();
    }
    fila.imprimir();
    fila.inserir(47);
    fila.inserir(932);
    cout << "=======================" << endl;
    fila.imprimir();
    cout << "=======================" << endl;
    for (int i=0; i<9; ++i) {
        fila.remover();
    }
    fila.imprimir();

    return 0;
}