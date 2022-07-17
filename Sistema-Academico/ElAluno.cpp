#include "ElAluno.h"
#include "Aluno.h"

ElAluno::ElAluno()
{
	ptrAluno = NULL;
	ptrProxElAluno = NULL;
	ptrUltimoElAluno = NULL;
}

ElAluno::~ElAluno()
{
	ptrAluno = NULL;
	ptrProxElAluno = NULL;
	ptrUltimoElAluno = NULL;
}

void ElAluno::setAluno(Aluno* novoAluno)
{
	if (novoAluno!= NULL) {
		ptrAluno = novoAluno;
	}
}

void ElAluno::setProxElAluno(ElAluno* proxEl)
{
	if (proxEl != NULL) {
		ptrProxElAluno = proxEl;
	}
}

void ElAluno::setUltimoElAluno(ElAluno* ultimoEl)
{
	if (ultimoEl != NULL) {
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
