#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Universidade.h"
#include "Disciplina.h"


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
	void iniciaDisciplinas();
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

	Disciplina Calculo;
	Disciplina Probabilidade;
	Disciplina MatematicaDiscreta;
	Disciplina QuimicaGeral;
	Disciplina interUniversidades;
	Disciplina fisica4;
	Disciplina TheThirdOne;
};

