#include "Departamento.h"
#include "Universidade.h"

Departamento::Departamento()
{
	nome = "";
}

Departamento::~Departamento()
{
	nome = "";
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
