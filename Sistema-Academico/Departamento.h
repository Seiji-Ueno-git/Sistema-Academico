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
	Departamento(int id);
	~Departamento();

	void setNome(string nomeD);
	void setUniFiliada(Universidade* uni);
	void setNovaDisciplina(Disciplina* newDis);
	void setId(int id);

	int getID();
	string getNome();
	Universidade* GetUniFiliada();

	void printDispinas();
	void printDisInReverse();

private:
	Universidade* universidadeFiliada;
	string nome;
	int id;
	
	ListaDisciplinas disciplinas; // lista duplamente encadeada.
};
