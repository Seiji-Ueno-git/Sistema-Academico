#pragma once
#include <iostream>
#include "Pessoa.h"

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

private:
	Pessoa Newton;
	Pessoa Albert;
	Pessoa Marie;
};

