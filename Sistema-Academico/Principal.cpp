#include "Principal.h"
#include <string>

Principal::Principal()
{
	inicializaPessoas();
	inicializaUniversidades();
	printUniversidades();

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

void Principal::inicializaUniversidades()
{
	// Departamentos se incluem nos dep da uni e salva unifiliada.
	//Inicializcao cambrige e seus respectivos departamentos
	Cambrige.setNome("Trinity College");
	FisicaCambrige.setUniFiliada(&Cambrige);
	FisicaCambrige.setNome("Fisica Cambrige");

	// Inicializcao Princeton e seus respectivos departamentos
	Princeton.setNome("Princeton");
	MatematicaPrinceton.setUniFiliada(&Princeton);
	FisicaPrinceton.setUniFiliada(&Princeton);
	MatematicaPrinceton.setNome("Matematica Princeton");
	FisicaPrinceton.setNome("Fisica Princeton");

	// Inicializcao Sorbonne e seus respectivos departamentos
	Sorbonne.setNome("Universidade de Paris");
	FisicaSorbonne.setUniFiliada(&Sorbonne);
	QuimicaSorbonne.setUniFiliada(&Sorbonne);
	RadiacionSorbonne.setUniFiliada(&Sorbonne);
	FisicaSorbonne.setNome("Fisica Sorbonne");
	QuimicaSorbonne.setNome("Quimica Sorbonne");
	RadiacionSorbonne.setNome("Procedimentos Radioativos Dep");
}

void Principal::printUniversidades()
{
	// departamentos se incluem na universidade.
	std::cout << FisicaCambrige.GetNomeUniFiliada() << ":" << std::endl;
	Cambrige.printDepartamentos();

	std::cout << Princeton.getNome() << ":" << std::endl;
	Princeton.printDepartamentos();

	std::cout << Sorbonne.getNome() << ":" << std::endl;
	Sorbonne.printDepartamentos();
}
