#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Aluno :
    public Pessoa
{
public:
    Aluno();
    Aluno(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP, Universidade* Uni, int r = -1);
    ~Aluno();
    
    void setRa(int r);
    void setUniversidade(Universidade* Uni);

    int getRa();
    Universidade* getUniversidade();

private:
    int ra; // Registro Academico
    Universidade* pUniversidadeFiliada;
};

