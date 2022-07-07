#include "Pessoa.h"

using std::cout;
using std::endl;

Pessoa::Pessoa() : 
	time()
{
	setDataNascimento(0,0,0);
	setGenero('x');
	setNome();
	idade = -1;
	bissexto = false;
}

Pessoa::Pessoa(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP)
{
	inicializa(nomeP, diaN, mesN, anoN, generoP);
}

Pessoa::~Pessoa()
{
	setDataNascimento(0, 0, 0);
	setGenero('x');
	setNome();
	idade = -1;
	bissexto = false;
}

void Pessoa::inicializa(string nomeP, unsigned int diaN, unsigned int mesN, unsigned int anoN, char generoP)
{
	setNome(nomeP);
	setDataNascimento(diaN, mesN, anoN);
	setGenero(generoP);
}

void Pessoa::setDataNascimento(unsigned int diaN, unsigned int mesN, unsigned int anoN)
{	
	unsigned int numeroDiasMensal[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int mesNP = mesN - 1;

	if (diaN == 0 || mesN == 0 || anoN == 0) {
		// No futuro arrumar retornando false e fazer o user reescrever a data de nascimento.
		dmy[0] = 0;
		dmy[1] = 0;
		dmy[2] = 0;
		return;
	}

	if (mesN == 2 && diaN > 28) {
		//Checar validade , ano bissexto
		if (anoN % 4 == 0 && (anoN % 100 != 0 || anoN % 400 == 0)) {
			dmy[0] = diaN;
			dmy[1] = mesN;
			dmy[2] = anoN;

			bissexto = true;
			setIdade(bissexto);

			return;
		}
		else
		{
			cout << "Erro - Mes Possui Apenas 28 dias - tente novamente" << endl;
		}
	}

	if ((diaN <= numeroDiasMensal[mesNP] && mesN <= 12)){

		dmy[0] = diaN;
		dmy[1] = mesN;
		dmy[2] = anoN;
		setIdade();

		if (time.getAno() - anoN > 100)
			cout << "Atenção - Pessoa com mais de 100 Anos - Ano Nascimento -> "<< anoN << endl;
	}
	else
	{
		cout << "Erro - Mes Possui Apenas" << numeroDiasMensal[mesNP] << "dias - tente novamente" << endl;
	}
}

void Pessoa::setIdade(bool b)
{
	// Para facilitar leitura.
	int diaN = dmy[0];
	int mesN = dmy[1];
	int anoN = dmy[2];

	int diaAtual = time.getDia();
	int mesAtual = time.getMes();
	int anoAtual = time.getAno();


	idade = anoAtual - anoN;

	if (mesN > mesAtual){
		idade = idade - 1;
	}
	else
	{
		if (mesN == mesAtual) {
			// caso seja um ano bissexto considerar dia de nascimento como 28.
			if (b == true) {
				diaN = 28;
			}

			if (diaN > diaAtual) {
				idade = idade - 1;
			}
		}
	}
}

void Pessoa::setGenero(char gen)
{
	switch (gen)
	{
	case 'M':
	case 'm':
		genero = 'm';
		break;
	
	case 'F':
	case 'f':
		genero = 'f';
		break;
	
	case 'X':
	case 'x':
		genero = 'x';
		break;

	default:
		genero = 'x';
		cout << "Genero não reconhecido - M para Homem | F para Mulher | X para não informar\n" 
			"Atenção - Genero definido automaticamente como (X - Não informar)" << endl;

		break;
	}
}

void Pessoa::setNome(string nomeP)
{
	if (nomeP.length() <= 30) {
		nome = nomeP;
	}
	else
	{
		nome = nomeP.substr(0, 30);

		cout << "Nome \"" << nomeP << "\" exede o tamanho maximo (30). \n" <<
			"Limitando Nome para os 30 primeiros caracteres." << endl;
	}
}

vector<unsigned int> Pessoa::getDataNascimentoDMY()
{
	vector<unsigned int> dmyVector = {dmy[0], dmy[1], dmy[2]};
	return dmyVector;
}

int Pessoa::getIdade()
{
	return idade;
}

string Pessoa::getNome()
{
	return nome;
}

char Pessoa::getGenero()
{
	return genero;
}
