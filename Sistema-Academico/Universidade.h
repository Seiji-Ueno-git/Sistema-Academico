#pragma once
#include <iostream>
#include <string>
#include "Departamento.h"
#include "ListaDepartamentos.h"


using std::string;

class Universidade
{
public:
	Universidade();
	~Universidade();

	void setNome(string nomeU);
	string getNome();
	
	void setDepartamento(Departamento* newDep);
	void printDepartamentos();

private:
	string nome;
	ListaDepartamentos departamentos; // Lista de encadeamento Simples
};

