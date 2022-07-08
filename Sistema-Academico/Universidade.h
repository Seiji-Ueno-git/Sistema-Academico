#pragma once
#include <iostream>
#include <string>
#include "Departamento.h"
#include "ElDepartamento.h"

using std::string;

class Universidade
{
public:
	Universidade();
	~Universidade();

	void setNome(string nomeU);
	string getNome();
	
	void setDepartamento(Departamento* newDep);
private:
	string nome;
	
	ElDepartamento* atualElDep;
	ElDepartamento* inicioElDep;
};

