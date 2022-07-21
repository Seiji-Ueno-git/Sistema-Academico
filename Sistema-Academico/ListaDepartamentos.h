#pragma once
#include <iostream>
#include <string>
#include "ElDepartamento.h"

class Departamento;
using std::string;

class ListaDepartamentos
{
public:
	ListaDepartamentos(int MaxDeps = -1);
	~ListaDepartamentos();

	void setNovoDepartamento(Departamento* newDep);
	void printDepartamentos();

	ElDepartamento* getDepartamentoInicio();
	Departamento* existeDepartamento(string departamento);

private:

	ElDepartamento* atualElDep;
	ElDepartamento* inicioElDep;

	int maxNdeps; // Numero maximo de departamentos permitido na lista.
	int counter_deps; // numero de departamentos atuais na lista.
};

