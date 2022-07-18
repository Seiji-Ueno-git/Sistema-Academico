#include "ListaDepartamentos.h"
#include "Departamento.h"

ListaDepartamentos::ListaDepartamentos(int MaxDeps)
{
	maxNdeps = MaxDeps;
	counter_deps = 0;
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

void ListaDepartamentos::setNovoDepartamento(Departamento* newDep)
{
	if ((newDep != NULL && counter_deps < maxNdeps)||(newDep != NULL && maxNdeps == -1)) {
		// criar ponteiro auxiliar do tipo Elemento Departamento
		ElDepartamento* paux = NULL;

		// novo elemento departamento
		paux = new ElDepartamento();

		paux->setDepartamento(newDep);

		if (inicioElDep == NULL) {
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
