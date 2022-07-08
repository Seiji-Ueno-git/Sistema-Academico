#pragma once

class Departamento;
class Universidade;


class ElDepartamento
{
public:
	ElDepartamento();
	~ElDepartamento();

	void setDepartamento(Departamento* newDep);
	void setProxElDep(ElDepartamento* PtrProxEl);

	Departamento* getDepartamento();
	ElDepartamento* getProxElDep();

private:
	Departamento* ptrDep;
	ElDepartamento* ptrProxElDep;
};

