#include "Aluno.h"

Aluno::Aluno():Pessoa()
{
	ra = -1;
	pUniversidadeFiliada = NULL;
}

Aluno::Aluno(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP,Universidade* Uni, int r):
	Pessoa(nomeP, diaN, mesN, anoN, generoP)
{
	ra = r;
	pUniversidadeFiliada = Uni;
}

Aluno::~Aluno()
{
	ra = -1;
	pUniversidadeFiliada = NULL;
}

void Aluno::setRa(int r)
{
	if (r > 0) {
		ra = r;
	}
}

void Aluno::setUniversidade(Universidade* uni)
{
	if (uni != NULL) {
		pUniversidadeFiliada = uni;
	}
}

int Aluno::getRa()
{
	return ra;
}

Universidade* Aluno::getUniversidade()
{
	return pUniversidadeFiliada;
}
