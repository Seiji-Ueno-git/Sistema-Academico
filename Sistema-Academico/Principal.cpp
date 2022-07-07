#include "Principal.h"
#include <string>

Principal::Principal()
{
	inicializaPessoas();
} 

Principal::~Principal()
{
}

void Principal::inicializaPessoas()
{
	Newton.inicializa("Isaac Newton", 4, 1, 1642, 'm');
	Albert.inicializa("albert einstein", 14, 3, 1879, 'm');
	Marie.inicializa("Marie Curie", 7, 11, 1867, 'f');
	
	printDadosPessoa(Newton);
	printDadosPessoa(Albert);
	printDadosPessoa(Marie);
}

void Principal::printDadosPessoa(Pessoa x)
{
	cout << x.getNome() << '\t' << x.getIdade() << '/' << x.getGenero() << "\nNascimento: " << endl;

	for (const int& i : x.getDataNascimentoDMY()) {
		cout << " " << i;
	}

	cout << '\n' << endl;
}
