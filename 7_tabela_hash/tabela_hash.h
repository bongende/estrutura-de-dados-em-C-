#ifndef TABELA_HASH_H
#define TABELA_HASH_H

typedef int TipoItem;

class Tabela_hash {
    int funcao_hash(Aluno aluno);
    int max_itens;
    int max_posisoes;
    int quant_itens;
    Aluno *estrutura;

    public:
        Tabela_hash(int tam_vetor, int max);
        ~Tabela_hash();
        bool esta_cheio();
        // bool esta_vazio();
        int obter_tamanho_atual();
        void inserir(Aluno aluno);
        void deletar(Aluno aluno);
        void buscar(Aluno &aluno, bool &busca);
        void imprimir();

};

#endif