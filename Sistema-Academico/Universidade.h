#pragma once
#include <iostream>
#include <string>
#include "Departamento.h"
#include "Disciplina.h"
#include "ListaDepartamentos.h"


using std::string;

class Universidade
{
public:
	Universidade(int id);
	~Universidade();

	void setNome(string nomeU);
	void setDepartamento(Departamento* newDep);

	string getNome();
	int getId();

	void printDepartamentos();

protected:
	int id;

private:
	string nome;
	ListaDepartamentos departamentos; // Lista de encadeamento Simples
};

