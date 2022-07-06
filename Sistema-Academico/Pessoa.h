#pragma once
#include <iostream>
#include <string>

using std::string;

class Pessoa
{
public:

	Pessoa();
	~Pessoa();

	void setDataNascimento(unsigned int diaN, unsigned int mesN, unsigned int anoN);
	void setNome();


	int* getGetDataNascimentoe();
	int getIdade(); 
	string getNome();

private:

	
	unsigned int dmy[3]; // Data de nascimento 
	int idade;

	string nome;
	char sexo;

};

