#include <iostream>
#include "pilha.h"

using namespace std;

int main () {
    Pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Gerenciar a pilha" << endl;
    
    do {
        cout << "1 para inserir im elemento" << endl;
        cout << "2 para remover im elemento" << endl;
        cout << "3 para verificar se esta vasia" << endl;
        cout << "4 para verificar se esta cheia" << endl;
        cout << "5 para imprimir os elementos" << endl;
        cout << "6 para ver o tamanho" << endl;
        cout << "7 para deletar a pilha" << endl;
        cout << "Digite 0 para sair " << endl;
        cin >> opcao;
        switch (opcao) {
            case (1) :
                cout << "digite valor :\t" ;
                cin >> item;
                pilha1.inserir(item);
                break;
            case (2) :
                item = pilha1.remover();
                cout << item << endl;
                break;
            case (3) :
                cout << pilha1.esta_vazia() << endl;
                break;
            case (4) :
                cout << pilha1.esta_cheia() << endl;
                break;
            case (5):
                pilha1.imprimir();
                break;
            case (6) :
                cout << pilha1.qual_tamanho() << endl;
                break;
            case (7) :
                pilha1.~Pilha();
                cout << "Pila deletada" << endl;
                break;
        }
    } while (opcao);

    return 0;
}


//! *****************************************  PILHA  *****************************************// 

    /*
    
    */