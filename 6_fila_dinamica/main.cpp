#include <iostream>
#include "fila_din.h"

using namespace std;

void gerenciar_fila() {
    Fila_dinamica fila1;
    cout << "a fila esta vazia :\t" << fila1.esta_vazio() << endl;
    cout << "=======================" << endl;
    for (int i = 0; i < 15; ++i) {
        fila1.inserir(i*3);
    }
    fila1.imprimir();
    cout << "=============================" << endl;
    cout << fila1.remover() << endl;
    cout << fila1.remover() << endl;
    cout << fila1.remover() << endl;
    cout << "=======================" << endl;
    fila1.imprimir();
    cout << "=======================" << endl;
    cout << "esta cheia :\t" << fila1.esta_cheio() << endl;
    cout << "=======================" << endl;
    // for (int i= 0; i<15; ++i) {
    // }
    fila1.remover();
    fila1.imprimir();
} 

int main() {
    gerenciar_fila();

    printf("Fim do programa!\n");
    return 0;
}