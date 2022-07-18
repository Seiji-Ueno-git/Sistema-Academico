#pragma once
#include <iostream>
#include <string>
#include "ListaDisciplinas.h"

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
	Universidade* GetUniFiliada();

	void setNovaDisciplina(Disciplina* newDis);
	void printDispinas();
	void printDisInReverse();

private:
	Universidade* universidadeFiliada;
	string nome;
	
	ListaDisciplinas disciplinas; // lista duplamente encadeada.
};
