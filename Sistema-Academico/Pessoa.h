#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "TimeSa.h"
#include "Universidade.h"

using std::string;
using std::vector;

class Pessoa
{
public:
	Pessoa();
	Pessoa(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP = 'x');

	~Pessoa();

	void inicializa(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP = 'x');

	void setDataNascimento(unsigned int diaN, unsigned int mesN, unsigned int anoN);
	void setNome(string nomeP = ""); // max 30 caracteres
	void setIdade(bool b = false);
	void setGenero(char); // Homem - M/m | Mulher - F/f | Não_Informar - X/x

	vector<unsigned int> getDataNascimentoDMY();
	int getIdade(); 
	string getNome();
	char getGenero();

private:
	unsigned int dmy[3]; // Data de nascimento , [dia/mes/ano]
	int idade;

	string nome;
	char genero;

	bool bissexto;

	TimeSa time;
};

