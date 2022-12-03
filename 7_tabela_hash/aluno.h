#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
    int ra;
    string nome;
    public:
        Aluno();
        Aluno(int r, string n);
        int obter_ra();
        string obter_nome();
};

#endif