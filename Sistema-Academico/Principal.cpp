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

	iniciaAlunos();
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
	//inclusao alunos
	Calculo.setAluno(&AAA);
	Calculo.setAluno(&BBB);
	MatematicaDiscreta.setAluno(&EEE);
	MatematicaDiscreta.setAluno(&AAA);
	Probabilidade.setAluno(&BBB);
	Probabilidade.setAluno(&AAA);
	Probabilidade.setAluno(&DDD);

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

	std::cout << FisicaCambrige.GetUniFiliada()->getNome() << ":" << std::endl;
	Cambrige.printDepartamentos();


	std::cout << Princeton.getNome() << ":" << std::endl;
	Princeton.printDepartamentos();


	std::cout << Sorbonne.getNome() << ":" << std::endl;
	Sorbonne.printDepartamentos();
}

void Principal::iniciaAlunos()
{
	AAA.inicializa("AAA", 1, 1, 2000);
	AAA.setUniversidade(&Princeton);
	AAA.setRa(1);

	BBB.inicializa("BBB", 1, 1, 2000);
	BBB.setUniversidade(&Princeton);
	BBB.setRa(2);

	CCC.inicializa("CCC", 1, 1, 2000);
	CCC.setUniversidade(&Princeton);
	CCC.setRa(3);

	DDD.inicializa("DDD", 1, 1, 2000);
	DDD.setUniversidade(&Princeton);
	DDD.setRa(4);

	EEE.inicializa("EEE", 1, 1, 2000);
	EEE.setUniversidade(&Princeton);
	EEE.setRa(5);



}
