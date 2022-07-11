#pragma once
class Disciplina;
class Departamento;

class ElDisciplina
{
public:
	ElDisciplina();
	~ElDisciplina();

	void setDisplina(Disciplina* Dis);
	void setProxEl(ElDisciplina* proxEl);
	void setUltimoiEl(ElDisciplina* ultimoEl);

	Disciplina* getDisplina();
	ElDisciplina* getProxEl();
	ElDisciplina* getUltimoEl();

private:
	Disciplina* ptrDisplina;

	ElDisciplina* pProxEldisplina;
	ElDisciplina* pUltimoElDisplina;
};

