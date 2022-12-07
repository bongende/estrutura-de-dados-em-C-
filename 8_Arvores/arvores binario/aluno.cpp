#include "aluno.h"

using namespace std;

Aluno::Aluno() {
    nome = " ";
    ra = -1;
}

Aluno::Aluno(int r, string n) {
    nome = n;
    ra = r;
}

string Aluno::obter_nome() {
    return nome;
}

int Aluno::obter_ra() {
    return ra;
}