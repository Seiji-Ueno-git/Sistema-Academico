#pragma once
#include <iostream>
#include <sstream>
#include <limits>
#include "Universidade.h"
#include "ListaUniversidades.h"
#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"


using std::cout;
using std::endl;

class Principal
{
public:
	Principal();
	~Principal();
	
	void inicializa();
	void executar();
	
	void cadDisciplina();
	void cadDepartamento();
	void cadUniversidade();

	void menu();
	void menuCad();
	void menuExe();

private:
	
	ListaUniversidades LUniversidades;
	ListaDepartamentos LDepartamentos;    
	ListaDisciplinas LDisciplinas;
};

