#include <iostream>
#include <cstddef>
#include "tabela_hash.h"
#include "aluno.h"

using namespace std;

int Tabela_hash::funcao_hash(Aluno aluno) {
    return (aluno.obter_ra() % max_posisoes ); 
}

Tabela_hash::Tabela_hash(int tam_vetor, int max) {
    quant_itens = 0;
    max_itens = max;
    max_posisoes = tam_vetor;
    estrutura = new Aluno[tam_vetor];
}

Tabela_hash::~Tabela_hash() {
    delete [] estrutura;
}

bool Tabela_hash::esta_cheio() {
    return quant_itens == max_itens;
}

int Tabela_hash::obter_tamanho_atual() {
    return quant_itens;
}

void Tabela_hash::inserir(Aluno aluno) {
    if (esta_cheio()) {
        printf("A tabela esta cheia, impossivel inserir!");
    } else {
        int local = funcao_hash(aluno);
        while(estrutura[local].obter_ra() > 0) local = (local + 1) % max_posisoes ;
        estrutura[local] = aluno;
        ++quant_itens;
    }
}

void Tabela_hash::deletar(Aluno aluno) {
    int local = funcao_hash(aluno);
    bool teste{false};
    while (estrutura[local].obter_ra() != -1 ) {
        if (estrutura[local].obter_ra() == aluno.obter_ra()) {
            estrutura[local] = Aluno(-2, " ");
            --quant_itens;
            printf("Elemento removide!");
            teste = true;
            break;
        }
        local = (local + 1) % max_posisoes;
    }
    if (!teste) printf("Elemento nao encontrado!");
}

void Tabela_hash::buscar(Aluno &aluno, bool &busca) {
    int local = funcao_hash(aluno);
    busca = false;
    while (estrutura[local].obter_ra() != -1) {
        if (estrutura[local].obter_ra() == aluno.obter_ra()) {
            busca = true;
            aluno = estrutura[local];
            break;
        } 
        local = (local + 1 ) % max_posisoes;
    }
}

void Tabela_hash::imprimir() {
    printf("Tabela Hash : {\n");
    for (int i = 0; i < max_posisoes ; ++i) {
        if (estrutura[i].obter_ra() < 0 ) {
            cout << i << " : " << estrutura[i].obter_ra() << "\t";
            cout << estrutura[i].obter_nome() << endl;
        }
    }
    printf("}\n");
}