#include <iostream>

using namespace std;

class Aluno {
    int ra;
    string nome;
    public:
        Aluno();
        Aluno(int r, string n);
        string obter_nome();
        int obter_ra();
};