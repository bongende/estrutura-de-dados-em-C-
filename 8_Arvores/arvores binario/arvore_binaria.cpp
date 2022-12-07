#include <iostream>
#include <cstddef>
#include "arvore_binaria.h"

using namespace std;

Arvore_binaria_de_busca::Arvore_binaria_de_busca() {
    raiz = NULL;
}
Arvore_binaria_de_busca::~Arvore_binaria_de_busca() {}
void Arvore_binaria_de_busca::deletar_arvore(No *no_atual) {}
No *Arvore_binaria_de_busca::obter_raize() {
    return raiz;
}
bool Arvore_binaria_de_busca::esta_vazio() {
    return raiz == NULL;
}
bool Arvore_binaria_de_busca::esta_cheio() {
    try {
        No *aluno_temp = new No;
        delete aluno_temp;
        return false;
    } catch (bad_alloc exception) {
        return true;
    } 
}
void Arvore_binaria_de_busca::inserir(Aluno aluno) {
    if (esta_cheio()) printf("A arvore esta cheia, impossivel inserir!\n");
    else {
        No *no_novo = new No;
        no_novo->aluno = aluno; 
        no_novo->filho_direita = NULL;
        no_novo->filho_esquerda = NULL;
        if (!raiz) {
            raiz = no_novo;
        } else  {
            No *temp = raiz;
            while (temp) {
                if (aluno.obter_ra() < temp->aluno.obter_ra()) {
                    if (!temp->filho_esquerda) {
                        temp->filho_esquerda = no_novo;
                        break;
                    } else {
                        temp = temp->filho_esquerda;
                    }
                } else {
                    if (!temp->filho_direita) {
                        temp->filho_direita = no_novo;
                        break;
                    } else {
                        temp = temp->filho_direita;
                    }
                }
            }
        }
    }
}
void Arvore_binaria_de_busca::remover(Aluno item) {}
void Arvore_binaria_de_busca::buscar(Aluno &aluno, bool &busca) {
    No *temp = raiz;
    busca = false;
    while (temp) {
        if (aluno.obter_ra() < temp->aluno.obter_ra()) {
            temp = temp->filho_esquerda;
        } else if (aluno.obter_ra() > temp->aluno.obter_ra()) {
            temp = temp->filho_direita;
        } else {
            busca = true;
            aluno = temp->aluno;
            cout << "elemento : " << aluno.obter_nome() << " em ra : " << aluno.obter_ra() << endl;
            break;
        }
    }
    if (!busca) printf("Elemento nao encontrado\n");
}
void Arvore_binaria_de_busca::imprimir_pre_ordem(No *no_atual) {}
void Arvore_binaria_de_busca::imprimir_em_ordem(No *no_atual) {}
void Arvore_binaria_de_busca::imprimir_pos_ordem(No *no_atual) {}