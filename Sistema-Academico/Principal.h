#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Universidade.h"


using std::cout;
using std::endl;
using std::vector;

class Principal
{
public:
	Principal();
	~Principal();

	void inicializaPessoas();
	void printDadosPessoa(Pessoa x);

	void inicializaUniversidades();
	void printUniversidades();

private:
	Pessoa Newton;
	Pessoa Albert;
	Pessoa Marie;

	Universidade Cambrige; // Trinity College
	Universidade Princeton;
	Universidade Sorbonne; // Universidade de paris

	Departamento FisicaCambrige;

	Departamento MatematicaPrinceton;
	Departamento FisicaPrinceton;

	Departamento FisicaSorbonne;
	Departamento QuimicaSorbonne;
	Departamento RadiacionSorbonne;

};

