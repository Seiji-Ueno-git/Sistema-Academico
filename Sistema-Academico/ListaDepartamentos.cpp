#include "ListaDepartamentos.h"
#include "Departamento.h"

ListaDepartamentos::ListaDepartamentos()
{
	atualElDep = NULL;
	inicioElDep = NULL;
}

ListaDepartamentos::~ListaDepartamentos()
{
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

void ListaDepartamentos::setAtualElDep(ElDepartamento* newDep)
{
	if (newDep != NULL)
		atualElDep = newDep;
}

void ListaDepartamentos::setInicioElDep(ElDepartamento* newDep)
{
	if (newDep != NULL)
		inicioElDep = newDep;
}

ElDepartamento* ListaDepartamentos::getAtualElDep()
{
	return atualElDep;
}

ElDepartamento* ListaDepartamentos::getInicioElDep()
{
	return inicioElDep;
}

void ListaDepartamentos::setNovoDepartamento(Departamento* newDep)
{
	if (newDep != NULL) {
		// criar ponteiro auxiliar do tipo Elemento Departamento
		ElDepartamento* paux = NULL;

		// novo elemento departamento
		paux = new ElDepartamento();

		paux->setDepartamento(newDep);

		if (inicioElDep == NULL) {
			atualElDep = paux;
			inicioElDep = paux;
		}
		else
		{
			atualElDep->setProxElDep(paux);
			atualElDep = paux;
		}
	}
}

void ListaDepartamentos::printDepartamentos()
{
	ElDepartamento* aux = NULL;
	aux = inicioElDep;
	int i = 1;

	while (aux != NULL)
	{
		std::cout << aux->getDepartamento()->getNome() << " / " << i << std::endl;

		aux->getDepartamento()->printDispinas();
		aux = aux->getProxElDep();
		i++;

		std::cout << std::endl;
	}
	std::cout << std::endl;
}
