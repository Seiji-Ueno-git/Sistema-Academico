#pragma once
#include <iostream>
#include "ElDepartamento.h"

class Departamento;

class ListaDepartamentos
{
public:
	ListaDepartamentos(int MaxDeps = -1);
	~ListaDepartamentos();

	void setNovoDepartamento(Departamento* newDep);
	void printDepartamentos();

private:
	ElDepartamento* atualElDep;
	ElDepartamento* inicioElDep;

	int maxNdeps; // Numero maximo de departamentos permitido na lista.
	int counter_deps; // numero de departamentos atuais na lista.
};

