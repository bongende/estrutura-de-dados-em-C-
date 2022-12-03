#include <iostream>
#include "aluno.h"
#include "tabela_hash.h"

using namespace std;

void gerenciar_hash(int tam_vetor, int max, string nomes[]) {

}

int main() {
    string nomes[] = {"Aberto", "ema", "imi", "home", "ben", "emili", "vens"};

    return 0;
}



//! *****************************************  TABELA HASH  *****************************************//

    /**
    ? Problema :
        Em uma faculdade é criado um Banco de dados com RA e o Nome de todos os alubis. Como é possivel criar uma busca eficiente neste banco dde dados?

    * Uma tabela de dispersao (tambem conhecida por tabela de espalhamento ou tabela hash) é uma estrutura de dados especial, que associa chaves de 
    *   pesquisa a valores, através de uma funçao. Seu objetivo é, a partir de uma chave simple, fazer uma busca rapida e obter o valor desejado.
    ? Funçao hash é boa se :-produizir um numero baixo de coolisoes;
                            - ser facilmente computavel
                            - ser uniforme
    
    */

//! *****************************************  TRATAMENTO DE COLISOES  *****************************************//

    /*
    Existem diversa formas de realozar o tratamento de colosoes em uma tabela hash, as duas formas que estudaremos aqui sao :
        - Encadeamento exterior ou Separado : -> Lista Encadeada
        - encadeamento interior ou Aberto : -> Heterogeneo, -> Homogeneo(Teste Linear)
    */