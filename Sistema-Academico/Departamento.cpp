#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"

Departamento::Departamento()
{
	nome = "";
	universidadeFiliada = NULL;
}

Departamento::~Departamento()
{
	nome = "";
	universidadeFiliada = NULL;
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

Universidade* Departamento::GetUniFiliada()
{
	return universidadeFiliada;
}

void Departamento::setNovaDisciplina(Disciplina* newDis)
{
	disciplinas.setNovaDisciplina(newDis);
}

void Departamento::printDispinas()
{
	disciplinas.printDispinas();
}

void Departamento::printDisInReverse()
{
	disciplinas.printDisInReverse();
}
