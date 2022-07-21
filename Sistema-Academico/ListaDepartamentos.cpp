#include "ListaDepartamentos.h"
#include "Departamento.h"

using std::cout;
using std::endl;

ListaDepartamentos::ListaDepartamentos(int MaxDeps)
{
	maxNdeps = MaxDeps;
	counter_deps = 0;
	atualElDep = nullptr;
	inicioElDep = nullptr;
}

ListaDepartamentos::~ListaDepartamentos()
{
	ElDepartamento* paux = nullptr;
	paux = inicioElDep;

	while (inicioElDep != nullptr)
	{
		inicioElDep = paux->getProxElDep();
		delete paux;
		paux = inicioElDep;
	}
	atualElDep = nullptr;
}

void ListaDepartamentos::setNovoDepartamento(Departamento* newDep)
{
	if (((newDep != nullptr) && (counter_deps < maxNdeps))||((newDep != nullptr) && (maxNdeps == -1))) {
		ElDepartamento* paux = new ElDepartamento();
		paux->setDepartamento(newDep);

		if (inicioElDep == nullptr) {
			atualElDep = paux;
			inicioElDep = paux;
			counter_deps++;
		}
		else
		{
			atualElDep->setProxElDep(paux);
			atualElDep = paux;
			counter_deps++;
		}
	}
	else
	{
		cout << "Error -  Departamento nao foi incluido" << endl;
	}
}

void ListaDepartamentos::printDepartamentos()
{
	ElDepartamento* paux = inicioElDep;

	while (paux != nullptr)
	{
		std::cout << "* " << (paux->getDepartamento()->getNome()) << std::endl;
		paux = paux->getProxElDep();
	}
	std::cout << std::endl;
}

ElDepartamento* ListaDepartamentos::getDepartamentoInicio()
{
	return inicioElDep;
}

Departamento* ListaDepartamentos::existeDepartamento(string nomeDep)
{
	ElDepartamento* paux = inicioElDep;

	while (paux != nullptr)
	{
		if ((paux->getDepartamento()->getNome()) == nomeDep) {
			return paux->getDepartamento();
		}
		paux = paux->getProxElDep();
	}
	return nullptr;
}
