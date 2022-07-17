#pragma once
#include "Departamento.h"
#include "ListaAlunos.h"
class Aluno;

class Disciplina
{
public:
	Disciplina();
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

private:
	string nome;
	int id;
	Departamento* departamentoAssociado;

	ListaAlunos listaDeAlunos; // lista duplamente encadeada.
};

