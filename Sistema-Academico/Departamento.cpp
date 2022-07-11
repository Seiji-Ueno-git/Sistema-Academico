#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"

Departamento::Departamento()
{
	nome = "";

	universidadeFiliada = NULL;
	incioElDis = NULL;
	atualElDis = NULL;
}

Departamento::~Departamento()
{
	nome = "";
	universidadeFiliada = NULL;

	ElDisciplina* aux = NULL;
	aux = incioElDis;

	while (incioElDis != NULL) {
		incioElDis = aux->getProxEl();
		delete aux;
		aux = incioElDis;
	}

}

void Departamento::setNome(string nomeD)
{
	if (nomeD.length() <= 35) {
		nome = nomeD;
	}
	else
	{
		nome = nomeD.substr(0, 35);

		std::cout << "Nome \"" << nomeD << "\" exede o tamanho maximo (35). \n" <<
			"Limitando Nome para os 35 primeiros caracteres." << std::endl;
	}
}

string Departamento::getNome()
{
	return nome;
}

void Departamento::setUniFiliada(Universidade* uni)
{
	if (uni != NULL) {
		universidadeFiliada = uni;
		uni->setDepartamento(this);
	}
}

string Departamento::GetNomeUniFiliada()
{
	return universidadeFiliada->getNome();
}

void Departamento::setDisciplina(Disciplina* newDis)
{
	if (newDis != NULL) {
		ElDisciplina* aux = NULL;
		aux = new ElDisciplina();
		aux->setDisplina(newDis);

		if (incioElDis == NULL) {
			incioElDis = aux;
			atualElDis = aux;
		}
		else
		{
			atualElDis->setProxEl(aux);
			aux->setUltimoiEl(atualElDis);
			atualElDis = aux;
		}
	}
}

void Departamento::printDispinas()
{
	ElDisciplina* aux;
	aux = incioElDis;

	int counter = 1;

	while (aux != NULL)
	{
		std::cout << counter << " --> " << aux->getDisplina()->getNome() << "/"
			<< aux->getDisplina()->getId() << std::endl;

		aux = aux->getProxEl();
		counter++;
	}
}

void Departamento::printDisInReverse()
{
	ElDisciplina* aux;
	aux = atualElDis;

	int counter = 0;

	while (aux!=NULL)
	{
		counter++;
		aux = aux->getUltimoEl();
	}
	aux = atualElDis;

	while (aux != NULL)
	{
		std::cout << counter << " --> " << aux->getDisplina()->getNome() << "/"
			<< aux->getDisplina()->getId() << std::endl;

		aux = aux->getUltimoEl();
		counter--;
	}
}
