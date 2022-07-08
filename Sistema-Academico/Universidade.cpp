#include "Universidade.h"

Universidade::Universidade()
{
	nome = "";
	atualElDep = NULL;
	inicioElDep = NULL;
}

Universidade::~Universidade()
{   
	nome = "";
	ElDepartamento* paux = NULL;
	paux = inicioElDep;

	while (inicioElDep != NULL)
	{
		inicioElDep = paux->getProxElDep();
		delete paux;
		paux = inicioElDep;
	}
	atualElDep = NULL;
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
	if (newDep != NULL) {
		// criar ponteiro auxiliar do tipo Elemento Departamento
		ElDepartamento* paux = NULL;

		// novo elemento departamento
		paux = new ElDepartamento();

		paux->setDepartamento(newDep);

		if (inicioElDep == NULL) {
			inicioElDep = paux;
			atualElDep = paux;
		}
		else
		{
			atualElDep->setProxElDep(paux);
			atualElDep = paux;
		}
	}
}
