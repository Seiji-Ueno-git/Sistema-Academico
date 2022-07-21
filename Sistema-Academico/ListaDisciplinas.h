#pragma once
#include <iostream>
#include "ElDisciplina.h"

class Displinas;

class ListaDisciplinas
{
public:
	ListaDisciplinas(int max = -1);
	~ListaDisciplinas();

	void incluaDisciplina(Disciplina* newDis);
	
	ElDisciplina* getDisciplinaInicio();

	void printDispinas();
	void printDisInReverse();

private:
	ElDisciplina* atualElDis;
	ElDisciplina* incioElDis;

	int maxNdisc; // numero maximo de disciplinas
	int counter_Disc; // numero de displinas na lista
};

