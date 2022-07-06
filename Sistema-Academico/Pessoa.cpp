#include "Pessoa.h"

using std::cout;
using std::endl;

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}

void Pessoa::setDataNascimento(unsigned int diaN, unsigned int mesN, unsigned int anoN)
{	
	int numeroDiasMensal[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};

	if (mesN == 2 && diaN > 28) {
		//Checar validade , ano bissexto
		if (anoN % 4 == 0 && (anoN % 100 != 0 || anoN % 400 == 0)) {
			dmy[0] = diaN;
			dmy[1] = mesN;
			dmy[2] = anoN;

			return;
		}
		else
		{
			cout << "Erro - Mes Possui Apenas 28 dias - tente novamente" << endl;
		}
	}

	if (diaN <= numeroDiasMensal[mesN - 1] && mesN <= 12) {

		dmy[0] = diaN;
		dmy[1] = mesN;
		dmy[2] = anoN;
	}
}

void Pessoa::setNome()
{
}

int* Pessoa::getGetDataNascimentoe()
{
	return nullptr;
}

int Pessoa::getIdade()
{
	return 0;
}

string Pessoa::getNome()
{
	return string();
}
