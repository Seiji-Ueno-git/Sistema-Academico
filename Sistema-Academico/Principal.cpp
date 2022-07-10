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
	//Inicializcao cambrige e seus respectivos departamentos
	Cambrige.setNome("Trinity College");
	//departamentos
	FisicaCambrige.setUniFiliada(&Cambrige);
	FisicaCambrige.setNome("Fisica Cambrige");
	//displinas
	fisica4.setDepartamentoAssociado(&FisicaCambrige);
	interUniversidades.setDepartamentoAssociado(&FisicaCambrige);

	// Inicializcao Princeton e seus respectivos departamentos
	Princeton.setNome("Princeton");
	MatematicaPrinceton.setUniFiliada(&Princeton);
	FisicaPrinceton.setUniFiliada(&Princeton);
	MatematicaPrinceton.setNome("Matematica Princeton");
	FisicaPrinceton.setNome("Fisica Princeton");
	//disciplinas
	Calculo.setDepartamentoAssociado(&MatematicaPrinceton);
	MatematicaDiscreta.setDepartamentoAssociado(&MatematicaPrinceton);
	TheThirdOne.setDepartamentoAssociado(&MatematicaPrinceton);
	Probabilidade.setDepartamentoAssociado(&FisicaPrinceton);

	// Inicializcao Sorbonne e seus respectivos departamentos
	Sorbonne.setNome("Universidade de Paris");
	FisicaSorbonne.setUniFiliada(&Sorbonne);
	QuimicaSorbonne.setUniFiliada(&Sorbonne);
	RadiacionSorbonne.setUniFiliada(&Sorbonne);
	FisicaSorbonne.setNome("Fisica Sorbonne");
	QuimicaSorbonne.setNome("Quimica Sorbonne");
	RadiacionSorbonne.setNome("Procedimentos Radioativos Dep");
	//displinas
	QuimicaGeral.setDepartamentoAssociado(&RadiacionSorbonne);

	iniciaDisciplinas();
}

void Principal::iniciaDisciplinas()
{
	MatematicaDiscreta.setNomeDisciplina("Matematica Discreta");
	MatematicaDiscreta.setId(1852);
	Probabilidade.setNomeDisciplina("Probabilidade");
	Probabilidade.setId(8);
	Calculo.setNomeDisciplina("Calculo");
	Calculo.setId(3);
	QuimicaGeral.setNomeDisciplina("QuimicaGeral");
	QuimicaGeral.setId(60221367);
	interUniversidades.setNomeDisciplina("Inter");
	interUniversidades.setId(0);
	fisica4.setNomeDisciplina("mecanica quantica");
	fisica4.setId(662606957);
	TheThirdOne.setNomeDisciplina("TheThirdOne");
	TheThirdOne.setId(333);
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
