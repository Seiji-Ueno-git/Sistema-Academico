#pragma once
#include <iostream>
#include <string>
#include "ElDisciplina.h"

class Universidade;
class Displina;

using std::string;

class Departamento
{
public:
	Departamento();
	~Departamento();

	void setNome(string nomeD);

	string getNome();
	void setUniFiliada(Universidade* uni);
	string GetNomeUniFiliada();

	void setDisciplina(Disciplina* newDis);
	void printDispinas();
	void printDisInReverse();

private:
	Universidade* universidadeFiliada;
	string nome;

	ElDisciplina* atualElDis;
	ElDisciplina* incioElDis;
};
