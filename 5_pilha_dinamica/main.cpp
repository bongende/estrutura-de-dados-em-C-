#include <iostream>
#include "pilha_din.h"

using namespace std;

int main() {
    Pilha_dinamica pilia1;
    cout << "esta  vazio :\t" << pilia1.esta_vazio() << endl;
    cout << "=============================" << endl;
    for (int i = 0; i<20;++i) {
        pilia1.inserir(i+23);
    }
    pilia1.imprimir();
    cout << "=============================" << endl;
    cout << pilia1.remover() << endl;
    cout << pilia1.remover() << endl;
    cout << "=============================" << endl;
    pilia1.imprimir();
    cout << "=============================" << endl;
    cout << "esta cheio :\t" << pilia1.esta_cheio() << endl;
    cout << "=============================" << endl;
    
    // delete pili;

    return 0;
}