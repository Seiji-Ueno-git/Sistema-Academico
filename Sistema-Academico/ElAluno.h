#pragma once
class Aluno;

class ElAluno
{
public:
	ElAluno();
	~ElAluno();

	void setAluno(Aluno* novoAluno);
	void setProxElAluno(ElAluno* proxEl);
	void setUltimoElAluno(ElAluno* UltimoEl);
	
	Aluno* getAluno();
	ElAluno* getProxElAluno();
	ElAluno* getUltimoElAluno();

private:
	Aluno* ptrAluno;
	ElAluno* ptrProxElAluno;
	ElAluno* ptrUltimoElAluno;
};

