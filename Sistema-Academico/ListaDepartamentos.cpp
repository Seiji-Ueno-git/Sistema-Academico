#include "ListaDepartamentos.h"
#include "Departamento.h"

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
	if ((newDep != nullptr && counter_deps < maxNdeps)||(newDep != nullptr && maxNdeps == -1)) {
		ElDepartamento* paux = new ElDepartamento();

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
}

void ListaDepartamentos::printDepartamentos()
{
	ElDepartamento* aux = nullptr;
	aux = inicioElDep;
	int i = 1;

	while (aux != nullptr)
	{
		std::cout << "* " << aux->getDepartamento()->getNome() << " / " << i << std::endl;
		aux->getDepartamento()->printDispinas();
		aux = aux->getProxElDep();
		i++;
	}
	std::cout << std::endl;
}

ElDepartamento* ListaDepartamentos::getDepartamentoInicio()
{
	return inicioElDep;
}

Departamento* ListaDepartamentos::existeDepartamento(string nomeDep)
{
	ElDepartamento* paux = nullptr;
	paux = inicioElDep;

	while (paux != NULL)
	{
		if ((paux->getDepartamento()->getNome()) == nomeDep) {
			return paux->getDepartamento();
		}
	}
	return nullptr;
}
