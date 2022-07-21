#pragma once
#include "ElAluno.h"
class Disciplina;
class Aluno;

class ListaAlunos
{
public:
	ListaAlunos(int maximo = 10);
	ListaAlunos(Disciplina* disciplinaAfiliada, int maximo = 10);
	~ListaAlunos();

	void setAluno(Aluno* novoAluno);
	void setMaxAlunos(int maximum);

	void printAlunos();
	void printAlunosV2();

private:
	Disciplina* ptrDisplina;

	ElAluno* ptrInicioElAluno;
	ElAluno* ptrAtualElAluno;

	int maxAlunos;
	int alunosMatriculados;
};

