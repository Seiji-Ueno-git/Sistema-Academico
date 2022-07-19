#pragma once
#include <iostream>
#include <string>
#include "ElUniversidade.h"

class Universidade;
using std::string;

class ListaUniversidades
{
public:
	ListaUniversidades(int max = -1);
	~ListaUniversidades();

	void setNovaUniversidade(Universidade* nova);

	void printUniversidades();
	
	Universidade* existeUniversidade(string NomeObjUni);

private:
	int maxNunis; // numero maximo de universidades
	int counter_uni;

	ElUniversidade* pElAtual;
	ElUniversidade* pElInicio;
};

