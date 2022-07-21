#pragma once
#include "Departamento.h"
#include "ListaAlunos.h"

class Aluno;

class Disciplina
{
public:
	Disciplina(int id);
	~Disciplina();

	void setNomeDisciplina(string nomeDis);
	void setId(int idDis);
	void setDepartamentoAssociado(Departamento* depFiliado);
	void setAluno(Aluno* novoAluno);

	void printAlunoS();
	void printAlunoSv2();
	string getNome();
	int getId();
	
	Departamento* getDepartamento();

protected:
	int id;

private:
	string nome;
	Departamento* departamentoAssociado;

	ListaAlunos listaDeAlunos; // lista duplamente encadeada.
};

