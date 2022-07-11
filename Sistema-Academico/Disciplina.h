#pragma once
#include "Departamento.h"

class Disciplina
{
public:
	Disciplina();
	~Disciplina();

	void setNomeDisciplina(string nomeDis);
	void setId(int idDis);
	void setDepartamentoAssociado(Departamento* depFiliado);

	string getNome();
	int getId();

private:
	string nome;
	int id;

	int maxAlunos;
	int alunosMatriculados;

	Departamento* departamentoAssociado;
};

