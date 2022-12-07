#include <iostream>
#include "arvore_binaria.h"

using namespace std;

int main() {
    bool busca;
    Aluno a(1234, "Ema");
    Aluno b(1754, "Anna");
    Aluno c(434, "Sila");
    Aluno d(3364, "Rose");
    Aluno e(7784, "Chris");
    Aluno f(934, "Annie");
    Aluno g(1112, "Ben");
    Aluno h(5003, "Stone");
    Aluno i(293, "Alice");
    Aluno n(2093, "Immacule");

    Arvore_binaria_de_busca BST;
    BST.inserir(a);
    BST.inserir(b);
    BST.inserir(c);
    BST.inserir(d);
    BST.inserir(e);
    BST.inserir(f);
    BST.inserir(g);
    BST.inserir(h);
    cout << "esta vazio : \t" << BST.esta_vazio() << endl;
    // cout << "esta vazio : \t" << BST.esta_vazio() << endl;
    BST.buscar(c, busca);
    BST.buscar(e, busca);
    BST.buscar(n, busca);
    BST.buscar(h, busca);
    return 0;
}



//! *****************************************  ARVORES BINARIOS  *****************************************//

    /*
    ? Ancestralidade de arvores
        seja x um vertice (No) que uma arvore com raiz r;
            - Ancestral : é qualquer No y no caminho de r a x.
            - Descendente : x é um descendente de y se y é ancestral de x;
            - Filho : x é filho de y se ele é um descendente direito
            - Pai : é o ancestral mais proximo. A raiz é o unico No sem pai.
            - Folha : é um No sem filhos.
    ? Altura e profundidade
        - profundidade de um No : é a distancia do No até a raiz.
        - Altura de um No : e a distancia do maior caminho até uma folha.

        - No interno : um No que nao é folha.
        - Grau : o grau de um No é o numero de filhos.
    
    ? Arvore Binaria
    e um arvore onde cada No tem no maximo dois filhos.

    ? Arvore Binaria de busca
        uma arvores binaria é dito de Busca, se para cada um de seus Nos (vertices), temos qua o elt deste No é maior que todos eltos dos Nos da sub
        arvore a sua esquerda, e menor que todos os elts dos Nos da sub arvore a sua direita.
    
        
    */