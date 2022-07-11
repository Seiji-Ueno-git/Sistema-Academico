#include "ElDepartamento.h"
#include "Departamento.h"
#include "Universidade.h"

ElDepartamento::ElDepartamento()
{
	ptrDep = NULL;
	ptrProxElDep = NULL;
}

ElDepartamento::~ElDepartamento()
{
	ptrDep = NULL;
	ptrProxElDep = NULL;
}

void ElDepartamento::setDepartamento(Departamento* newDep)
{
	if(newDep != NULL)
	ptrDep = newDep;
}

void ElDepartamento::setProxElDep(ElDepartamento* PtrProxEl)
{
	if(PtrProxEl != NULL)
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
