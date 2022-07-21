#include "ElAluno.h"
#include "Aluno.h"

ElAluno::ElAluno()
{
	ptrAluno = nullptr;
	ptrProxElAluno = nullptr;
	ptrUltimoElAluno = nullptr;
}

ElAluno::~ElAluno()
{
	ptrAluno = nullptr;
	ptrProxElAluno = nullptr;
	ptrUltimoElAluno = nullptr;
}

void ElAluno::setAluno(Aluno* novoAluno)
{
	if (novoAluno!= nullptr) {
		ptrAluno = novoAluno;
	}
}

void ElAluno::setProxElAluno(ElAluno* proxEl)
{
	if (proxEl != nullptr) {
		ptrProxElAluno = proxEl;
	}
}

void ElAluno::setUltimoElAluno(ElAluno* ultimoEl)
{
	if (ultimoEl != nullptr) {
		ptrUltimoElAluno = ultimoEl;
	}
}

Aluno* ElAluno::getAluno()
{
	return ptrAluno;
}

ElAluno* ElAluno::getProxElAluno()
{
	return ptrProxElAluno;
}

ElAluno* ElAluno::getUltimoElAluno()
{
	return ptrUltimoElAluno;
}
