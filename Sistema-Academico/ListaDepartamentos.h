#pragma once
#include <iostream>
#include "ElDepartamento.h"

class Departamento;

class ListaDepartamentos
{
public:
	ListaDepartamentos();
	~ListaDepartamentos();

	void setAtualElDep(ElDepartamento* newDep);
	void setInicioElDep(ElDepartamento* newDep);

	ElDepartamento* getAtualElDep();
	ElDepartamento* getInicioElDep();

	void setNovoDepartamento(Departamento* newDep);
	void printDepartamentos();

private:
	ElDepartamento* atualElDep;
	ElDepartamento* inicioElDep;
};

