#include "ElDepartamento.h"
#include "Departamento.h"
#include "Universidade.h"

ElDepartamento::ElDepartamento()
{
	ptrDep = nullptr;
	ptrProxElDep = nullptr;
}

ElDepartamento::~ElDepartamento()
{
	ptrDep = nullptr;
	ptrProxElDep = nullptr;
}

void ElDepartamento::setDepartamento(Departamento* newDep)
{
	if(newDep != nullptr)
	ptrDep = newDep;
}

void ElDepartamento::setProxElDep(ElDepartamento* PtrProxEl)
{
	if(PtrProxEl != nullptr)
	ptrProxElDep = PtrProxEl;
}

Departamento* ElDepartamento::getDepartamento()
{
	return ptrDep;
}

ElDepartamento* ElDepartamento::getProxElDep()
{
	return ptrProxElDep;
}
