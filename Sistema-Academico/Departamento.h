#pragma once
#include <iostream>
#include <string>

class Universidade;
using std::string;

class Departamento
{
public:
	Departamento();
	~Departamento();

	void setNome(string nomeD);

	string getNome();
	void setUniFiliada(Universidade* uni);

private:
	Universidade* universidadeFiliada;
	string nome;
};
