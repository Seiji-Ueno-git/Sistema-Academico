#include <iostream>
#include "ElUniversidade.h"

ElUniversidade::ElUniversidade()
{
	ptrProxElUni = nullptr;
	ptrUniversidade = nullptr;
}

ElUniversidade::~ElUniversidade()
{
	ptrProxElUni = nullptr;
	ptrUniversidade = nullptr;
}

void ElUniversidade::setProxElUni(ElUniversidade* nextElUni)
{
	if (nextElUni != nullptr)
		ptrProxElUni = nextElUni;
}

void ElUniversidade::setUniversidade(Universidade* uni)
{
	if (uni != nullptr)
		ptrUniversidade = uni;
}

ElUniversidade* ElUniversidade::getProxElUni()
{
	return ptrProxElUni;
}

Universidade* ElUniversidade::getUniversidade()
{
	return ptrUniversidade;
}