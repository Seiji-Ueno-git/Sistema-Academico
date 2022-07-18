#include "Disciplina.h"
#include "Aluno.h"

Disciplina::Disciplina():
	listaDeAlunos(this,5)
{
	departamentoAssociado = NULL;
	id = -1;
}

Disciplina::~Disciplina()
{
	departamentoAssociado = NULL;
	id = -1;
}

void Disciplina::setNomeDisciplina(string nomeDis)
{
	if (nomeDis.length() <= 45) {
		nome = nomeDis;
	}
	else
	{
		nome = nomeDis.substr(0, 45);

		std::cout << "Nome \"" << nomeDis << "\" exede o tamanho maximo (45). \n" <<
			"Limitando Nome para os 45 primeiros caracteres. " << std::endl;
	}
}

void Disciplina::setId(int idDis)
{
	if (idDis > 0) {
		id = idDis;
	}
}

void Disciplina::setDepartamentoAssociado(Departamento* depFiliado)
{
	if (depFiliado != NULL) {
		departamentoAssociado = depFiliado;
		depFiliado->setNovaDisciplina(this);
	}
}

void Disciplina::setAluno(Aluno* novoAluno)
{
	listaDeAlunos.setAluno(novoAluno);
}

void Disciplina::printAlunoS()
{
	listaDeAlunos.printAlunos();
}

void Disciplina::printAlunoSv2()
{
	listaDeAlunos.printAlunosV2();
}

string Disciplina::getNome()
{
	return nome;
}

int Disciplina::getId()
{
	return id;
}

Departamento* Disciplina::getDepartamento()
{
	return departamentoAssociado;
}
