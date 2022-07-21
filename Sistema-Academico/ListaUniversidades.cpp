#include "ListaUniversidades.h"
#include "Universidade.h"

ListaUniversidades::ListaUniversidades(int max)
{
	maxNunis = max;
	counter_uni = 0;
	pElAtual = nullptr;
	pElInicio = nullptr;
}

ListaUniversidades::~ListaUniversidades()
{
	maxNunis = 0;
	counter_uni = 0;

	ElUniversidade* paux = nullptr;
	paux = pElInicio;

	while (pElInicio != nullptr)
	{
		pElInicio = paux->getProxElUni();
		delete paux;
		paux = pElInicio;
	}
	pElAtual = nullptr;
}

void ListaUniversidades::setNovaUniversidade(Universidade* nova)
{
	if (((nova != nullptr) && (counter_uni < maxNunis)) || ((nova != nullptr) && (maxNunis == -1))) {
		ElUniversidade* paux = nullptr;
		paux = new ElUniversidade();
		paux->setUniversidade(nova);

		if (pElInicio == nullptr) {
			pElAtual = paux;
			pElInicio = paux;
			counter_uni++;
		}
		else
		{
			pElAtual->setProxElUni(paux);
			pElAtual = paux;
			counter_uni++;
		}
	}
	else
	{
		std::cout << "Error - Universidade Invalida ou Numero maximo atingido / Universidade Não Adicionada" << std::endl;
	}
}

void ListaUniversidades::printUniversidades()
{
	ElUniversidade* paux = nullptr;
	paux = pElInicio;

	std::cout << " - Universidades Cadastradas :" << std::endl;
	while (paux != nullptr)
	{
		std::cout << "* " << paux->getUniversidade()->getNome() << std::endl;
		paux = paux->getProxElUni();
	}
}

Universidade* ListaUniversidades::existeUniversidade(string NomeObjUni)
{
	ElUniversidade* paux = nullptr;
	paux = pElInicio;

	while(paux != nullptr)
	{
		if ((paux->getUniversidade()->getNome()) == NomeObjUni) {
			return paux->getUniversidade();
		}
		paux = paux->getProxElUni();
	}
	return nullptr;
}

ElUniversidade* ListaUniversidades::getUniversidadeInicio()
{
	return pElInicio;
}
