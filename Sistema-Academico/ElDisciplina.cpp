#include "ElDisciplina.h"
#include "Departamento.h"
#include "Universidade.h"



ElDisciplina::ElDisciplina()
{
	ptrDisplina = nullptr;
	pProxEldisplina = nullptr;
	pUltimoElDisplina = nullptr;
}

ElDisciplina::~ElDisciplina()
{
	ptrDisplina = nullptr;
	pProxEldisplina = nullptr;
	pUltimoElDisplina = nullptr;
}

void ElDisciplina::setDisplina(Disciplina* Dis)
{
	ptrDisplina = Dis;
}

void ElDisciplina::setProxEl(ElDisciplina* proxEl)
{
	pProxEldisplina = proxEl;
}

void ElDisciplina::setUltimoiEl(ElDisciplina* ultimoEl)
{
	pUltimoElDisplina = ultimoEl;
}

Disciplina* ElDisciplina::getDisplina()
{
	return ptrDisplina;
}

ElDisciplina* ElDisciplina::getProxEl()
{
	return pProxEldisplina;
}

ElDisciplina* ElDisciplina::getUltimoEl()
{
	return pUltimoElDisplina;
}

