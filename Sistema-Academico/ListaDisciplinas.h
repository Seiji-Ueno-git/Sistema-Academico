#pragma once
#include <iostream>
#include "ElDisciplina.h"

class Displinas;

class ListaDisciplinas
{
public:
	ListaDisciplinas();
	~ListaDisciplinas();

	void setAtualElDis(ElDisciplina* NovaDisplinaAtual);
	void setInicioElDis(ElDisciplina* NovaDisplinaAtual);

	ElDisciplina* getAtualElDis();
	ElDisciplina* getInicioElDis();

	void setNovaDisciplina(Disciplina* newDis);

	void printDispinas();
	void printDisInReverse();

private:
	ElDisciplina* atualElDis;
	ElDisciplina* incioElDis;
};

