#include <iostream>
#include "aluno.h"

using namespace std;

struct No {
    Aluno aluno;
    No *filho_esquerda;
    No * filho_direita;
};

class Arvore_binaria_de_busca{              // BST
    No* raiz;
    public:
        Arvore_binaria_de_busca();
        ~Arvore_binaria_de_busca();
        void deletar_arvore(No *no_atual);
        No *obter_raize();
        bool esta_vazio();
        bool esta_cheio();
        void inserir(Aluno aluno);
        void remover(Aluno item);
        void buscar(Aluno &aluno, bool &busca);
        void imprimir_pre_ordem(No *no_atual);
        void imprimir_em_ordem(No *no_atual);
        void imprimir_pos_ordem(No *no_atual);
};