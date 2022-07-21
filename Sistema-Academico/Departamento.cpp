#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"


Departamento::Departamento(int DepId)
{
	id = DepId;
	nome = "";
	universidadeFiliada = nullptr;
}

Departamento::~Departamento()
{
	nome = "";
	universidadeFiliada = nullptr;
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

void Departamento::setId(int idDep)
{
	id = idDep;
}

int Departamento::getID()
{
	return id;
}

string Departamento::getNome()
{
	return nome;
}

void Departamento::setUniFiliada(Universidade* uni)
{
	if (uni != nullptr) {
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
	disciplinas.incluaDisciplina(newDis);
}

void Departamento::printDispinas()
{
	disciplinas.printDispinas();
}

void Departamento::printDisInReverse()
{
	disciplinas.printDisInReverse();
}
