#include "Principal.h"
#include <string>

Principal::Principal()
{
	executar();
} 

Principal::~Principal()
{
}

void Principal::executar()
{
	// ...
	menu();
}

void Principal::cadDisciplina()
{

}

void Principal::cadDepartamento()
{
	int op = -1;
	string nomeDep;
	string nomeUni;
	Universidade* ptrUni = nullptr;
	Departamento* paux = nullptr;

	cout << "\n Sistema Academico 1.0 - Cadastro Departamento " << endl;
	cout << "Escreva o nome da Universidade Filiada: " << endl;
	cout << " -> ";
	std::cin >> nomeUni;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	ptrUni = LUniversidades.existeUniversidade(nomeUni);

	if (ptrUni != nullptr) {

		cout << "Escreva o nome do Departamento : " << endl;
		cout << " -> "; 
		std::cin >> nomeDep;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		//std::cin.sync();
		cout << "*Departamento Cadastrado" << endl;

		paux = new Departamento();
		paux->setNome(nomeDep);
		paux->setUniFiliada(ptrUni);

		LDepartamentos.setNovoDepartamento(paux);

		system("Pause");
	}
	else
	{
		while (op != 3)
		{
			cout << " Error - Universidade inexistente : " << endl;
			cout << " 1 - Tentar Novamente" << endl;
			cout << " 2 - Listar Universidades e Tentar Novamente" << endl;
			cout << " 3 - Voltar ao Menu De Cadastro" << endl;
			cout << " -> ";
			std::cin >> op;

			switch (op)
			{
			case 1: { 
				system("cls");
				cadDepartamento();
				}
				  break;

			case 2: {
				system("cls");
				LUniversidades.printUniversidades();
				cadDepartamento();
				}
				  break;

			case 3: 
				  break;

			default: {
				cout << "Alternativa Nao reconhecida!" << endl;
				system("Pause");
			}
				   break;
			}
		}
	}
}

void Principal::cadUniversidade()
{
	string nomeUni;
	Universidade* paux = nullptr;

	cout << "\n Sistema Academico 1.0 - Cadastro Universidade" << endl;
	cout << "Escreva o nome da Universidade : " << endl;
	cout << " -> ";
	std::cin >> nomeUni;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "* Universidade Cadastrada" << endl;

	paux = new Universidade();
	paux->setNome(nomeUni);

	LUniversidades.setNovaUniversidade(paux);

	system("Pause");
}

void Principal::menu()
{
	int op = -1;

	while (op != 3)
	{
		system("cls");
		cout << "Bem Vindo ao Sistema Academico 1.0 " << endl;
		cout << "Informe a alternativa desejada: " << endl;
		cout << " 1 - Cadastrar. " << endl;
		cout << " 2 - Executar. " << endl;
		cout << " 3 - Sair. " << endl;
		cout << " -> ";
		std::cin >> op;

		switch (op)
		{
		case 1: { menuCad(); }
			break;

		case 2: { menuExe(); }
			  break;

		case 3: { cout << " FIM " << endl; }
			  break;

		default: {
			cout << "Alternativa Nao reconhecida!" << endl;
			system("Pause");
				}
			break;
		}
	}
}

void Principal::menuCad()
{
	int op = -1;

	while (op != 4)
	{
		system("cls");
		cout << "Sistema Academico 1.0 - Menu Cadastro" << endl;
		cout << "Informe o numero desejado : " << endl;
		cout << " 1 - Cadastrar Universidade : " << endl;
		cout << " 2 - Cadastrar Departamentos : " << endl;
		cout << " 3 - Cadastrar Displinas" << endl;
		cout << " 4 - Menu Principal. " << endl;
		cout << " -> ";
		std::cin >> op;

		switch (op)
		{
		case 1: { cadUniversidade(); }
			  break;

		case 2: { cadDepartamento(); }
			  break;

		case 3: { cadDisciplina(); }
			  break;

		case 4:
			  break;

		default: {
			cout << "Alternativa Nao reconhecida!" << endl;
			system("Pause");
		}
			   break;
		}
	}
}

void Principal::menuExe()
{
	int op = -1;

	while (op != 4)
	{
		system("cls");
		cout << "Sistema Academico 1.0 - Menu Executar" << endl;
		cout << "Informe o numero desejado : " << endl;
		cout << " 1 - Listar Universidades. " << endl;
		cout << " 2 - Listar Departamentos. " << endl;
		cout << " 3 - Listar Disciplinas. " << endl;
		cout << " 4 - Menu Principal. " << endl;
		cout << " -> ";
		std::cin >> op;

		switch (op)
		{
		case 1: { LUniversidades.printUniversidades();
					fflush(stdin);
					system("Pause");
			}
			  break;

		case 2: { LDepartamentos.printDepartamentos(); 
					fflush(stdin);
					system("Pause");
			}
			  break;

		case 3: { LDisciplinas.printDispinas(); }
					fflush(stdin);
					system("Pause");
			  break;

		case 4:
			  break;

		default: {
			cout << "Alternativa Nao reconhecida!" << endl;
			system("Pause");
		}
			   break;
		}
	}
}
