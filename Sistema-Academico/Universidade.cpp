#include "Universidade.h"

Universidade::Universidade()
{
	nome = "";
}

Universidade::~Universidade()
{   
	nome = "";
}

void Universidade::setNome(string nomeU)
{
	if (nomeU.length() <= 35){
		nome = nomeU;
	}
	else
	{
		nome = nomeU.substr(0, 35);

		std::cout << "Nome \"" << nomeU << "\" exede o tamanho maximo (30). \n" <<
			"Limitando Nome para os 35 primeiros caracteres." << std::endl;
	}
}

string Universidade::getNome()
{
	return nome;
}

void Universidade::setDepartamento(Departamento* newDep)
{
	departamentos.setNovoDepartamento(newDep);
}

void Universidade::printDepartamentos()
{
	departamentos.printDepartamentos();
}



