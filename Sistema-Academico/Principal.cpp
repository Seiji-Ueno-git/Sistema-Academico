#include "Principal.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
//#include <ctype.h>
// isalpha(int)

using std::cout;
using std::endl;
using std::cin;

// Construtora e destrutora
Principal::Principal():
	cont_idUniv(0),
	cont_idAluno(0),
	cont_idDisc(0),
	cont_idDepart(0)
{
	executar();
} 
Principal::~Principal()
{
}

// executar main loop
void Principal::executar()
{
	// ...
	menu();
}

// Menu Principal
void Principal::menu()
{
	int op = -1;

	while (op != 5)
	{
		system("cls");
		cout << "Bem Vindo ao Sistema Academico 1.0 " << endl;
		cout << "Informe a alternativa desejada: " << endl;
		cout << " 1 - Cadastrar. " << endl;
		cout << " 2 - Executar. " << endl;
		cout << " 3 - Gravar " << endl;
		cout << " 4 - Recuperar" << endl;
		cout << " 5 - Sair" << endl;
		cout << " -> ";
		std::cin >> op;

		switch (op)
		{
		case 1: { menuCad(); }
			  break;

		case 2: { menuExe(); }
			  break;

		case 3: { MenuGravar(); }
			  break;
		
		case 4: { MenuRecuperar(); }

		case 5: { cout << " FIM " << endl; }
			  break;

		default: {
			cout << "Alternativa Nao reconhecida!" << endl;
			system("Pause");
		}
			   break;
		}
	}
}

// Menu de Cadastro
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

// Menu de Listagem
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

// Menu para gravacoes em arquivo
void Principal::MenuGravar()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << "Sistema Academico 1.0 - Gravar" << endl;
		cout << " Informe sua opcao: " << endl;
		cout << " 0 - Gravar Tudo. " << endl;
		cout << " 1 - Gravar Universidades. " << endl;
		cout << " 2 - Gravar Departamentos. " << endl;
		cout << " 3 - Gravar Disciplinas. " << endl;
		cout << " 4 - Gravar Alunos. " << endl;
		cout << " 5 - Menu Principal. " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			GravarTudo();
			system("pause");
			break;
		case 1:
			GravarUniversidades();
			system("pause");
			break;
		case 2:
			GravarDepartamentos();
			system("pause");
			break;
		case 3:
			GravarDisciplinas();
			system("pause");
			break;
		case 4:
			GravarAlunos();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}

// Menu para recuperacao dos arquivos
void Principal::MenuRecuperar()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << "Sistema Academico 1.0 - Recuperar" << endl;
		cout << " Informe sua opcao: " << endl;
		cout << " 0 - Recuperar Tudo. " << endl;
		cout << " 1 - Recuperar Universidades. " << endl;
		cout << " 2 - Recuperar Departamentos. " << endl;
		cout << " 3 - Recuperar Disciplinas. " << endl;
		cout << " 4 - Recuperar Alunos. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			RecuperarTudo();
			system("pause");
			break;
		case 1:
			RecuperarUniversidades();
			system("pause");
			break;
		case 2:
			RecuperarDepartamentos();
			system("pause");
			break;
		case 3:
			RecuperarDisciplinas();
			system("pause");
			break;
		case 4:
			RecuperarAlunos();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}

// Cadastro de Objetos
void Principal::cadAlunos()
{

}
void Principal::cadDisciplina()
{
	int op = -1;
	string nomeDep;
	string nomeDis;
	Disciplina* ptrDis = nullptr;

	cout << "\n Sistema Academico 1.0 - Cadastro Disciplina" << endl;
	cout << "Escreva o nome do Departamento : " << endl;
	cout << " -> ";
	std::cin >> nomeDep;

	Departamento* ptrDep = LDepartamentos.existeDepartamento(nomeDep);

	if (ptrDep != nullptr) {
			cout << "Escreva o nome da disciplina : " << endl;
			cout << " -> ";
			std::cin >> nomeDis;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			
			ptrDis = new Disciplina(cont_idDisc++);
			ptrDis->setNomeDisciplina(nomeDis);
			ptrDis->setDepartamentoAssociado(ptrDep);

			LDisciplinas.incluaDisciplina(ptrDis);
			cout << "* Disciplina Cadastrada" << endl;

			system("Pause");
	}
	else 
	{
		while (op != 3)
		{
			cout << " Error - Disciplina inexistente : " << endl;
			cout << " 1 - Tentar Novamente" << endl;
			cout << " 2 - Listar Disciplinas e Tentar Novamente" << endl;
			cout << " 3 - Voltar ao Menu De Cadastro" << endl;
			cout << " -> ";
			std::cin >> op;

			switch (op)
			{
			case 1: {
				system("cls");
				cadDisciplina();
				}
				  break;

			case 2: {
				system("cls");
				LDepartamentos.printDepartamentos();
				cadDisciplina();
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
void Principal::cadDepartamento()
{
	string nomeDep;
	string nomeUni;

	cout << "\n Sistema Academico 1.0 - Cadastro Departamento " << endl;
	cout << "Escreva o nome da Universidade Filiada: " << endl;
	cout << " -> ";
	std::cin >> nomeUni;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	Universidade* ptrUni = LUniversidades.existeUniversidade(nomeUni);
	if (ptrUni != nullptr) {

		cout << "Escreva o nome do Departamento : " << endl;
		cout << " -> "; 
		std::cin >> nomeDep;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//std::cin.sync();

		Departamento* paux = new Departamento(cont_idDepart++);
		paux->setNome(nomeDep);
		paux->setUniFiliada(ptrUni);

		LDepartamentos.setNovoDepartamento(paux);
		cout << "*Departamento Cadastrado" << endl;

		system("Pause");
	}
	else
	{
		int op = -1;
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
	string nomeUniversidade;
	cout << "\n Sistema Academico 1.0 - Cadastro Universidade" << endl;
	cout << "Escreva o nome da Universidade : " << endl;
	cout << " -> ";
	cin >> nomeUniversidade;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	Universidade* paux = new Universidade(cont_idUniv++);
	paux->setNome(nomeUniversidade);
	LUniversidades.setNovaUniversidade(paux);
	cout << "* Universidade Cadastrada" << endl;

	system("Pause");
}

// funcoes para a gravacao de objetos em arquivo
void Principal::GravarTudo() {
	GravarUniversidades();
	GravarDepartamentos();
	GravarDisciplinas();
	GravarAlunos();
}
void Principal::GravarUniversidades() {
	std::ofstream out("universidades.dat", std::ios::out);
	if (out) {
		ElUniversidade* paux = LUniversidades.getUniversidadeInicio();
		while (paux != NULL) {
			out << (paux->getUniversidade())->getNome() << " " << (paux->getUniversidade())->getId() << endl;
			paux = paux->getProxElUni();
		}
		cout << "Universidades gravadas com sucesso " << endl;
	}
	else {
		std::cerr << " Error - Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarDepartamentos() {
	std::ofstream out("departamentos.dat", std::ios::out);
	if (out) {
		ElDepartamento* paux = LDepartamentos.getDepartamentoInicio();
		while (paux != NULL) {
			out << (paux->getDepartamento())->getNome() << " " << (paux->getDepartamento()->getID())
				<< " " << (paux->getDepartamento()->GetUniFiliada()->getNome())<< endl;
			paux = paux->getProxElDep();
		}
		cout << "Departamentos gravados com sucesso" << endl;
	}
	else {
		std::cerr << "Error - Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarDisciplinas() {
	std::ofstream out("disciplinas.dat", std::ios::out);
	if (out) {
		ElDisciplina* paux = LDisciplinas.getDisciplinaInicio();
		while (paux != NULL) {
			out << (paux->getDisplina()->getNome())<< " " << (paux->getDisplina()->getId())
				<< " " << (paux->getDisplina()->getDepartamento()->getNome()) << endl;
			paux = paux->getProxEl();
		}
		cout << " Disciplinas gravadas com sucesso " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarAlunos() {
	/*
	std::ofstream out("alunos.dat", std::ios::out);
	if (out) {
		ElAluno* paux = LAlunos.getAlunoPrim();
		while (paux != NULL) {
			out << (paux->getAluno())->getNome() << " " << (paux->getAluno())->getRA() << " " <<
				(paux->getAluno())->getId() << " " << (paux->getDisciplina())->getNome() << endl;
			paux = paux->pProx;
		}
		cout << " Os alunos foram gravados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
	*/
}

// funcoes para a recuperacao de objetos em arquivo
void Principal::RecuperarTudo() {
	RecuperarUniversidades();
	RecuperarDepartamentos();
	RecuperarDisciplinas();
	RecuperarAlunos();
}
void Principal::RecuperarUniversidades() {
	std::ifstream in("universidades.dat", std::ios::in);
	if (in) {
		char nome[150];
		int id;
		while (in >> nome >> id) {
			Universidade* puniv = new Universidade(id);
			puniv->setNome(nome);
			LUniversidades.setNovaUniversidade(puniv);
			cont_idUniv++;
		}
		cout << " As universidades foram recuperadas " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarDepartamentos() {
	std::ifstream in("departamentos.dat", std::ios::in);
	if (in) {
		char nome[150], nomeuniv[150];
		int id;
		while (in >> nome >> id >> nomeuniv) {
			Universidade* puniv = LUniversidades.existeUniversidade(nomeuniv);
			if (puniv) {
				Departamento* pdep = new Departamento(id);
				pdep->setNome(nome);
				pdep->setUniFiliada(puniv);
				LDepartamentos.setNovoDepartamento(pdep);
				cont_idDepart++;
			}
			else {
				cout << " universidade " << nomeuniv << " nao encontrada " << endl;
				cout << " departamento " << nome << " nao incluido " << endl;
				cout << endl;
			}
		}
		cout << " Os departamentos foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarDisciplinas() {
	std::ifstream in("disciplinas.dat", std::ios::in);
	if (in) {
		char nome[150], nomedep[150];
		int id;
		while (in >> nome >> id >> nomedep) {
			Departamento* pdep = LDepartamentos.existeDepartamento(nomedep);
			if (pdep) {
				Disciplina* pdisc = new Disciplina(id);
				pdisc->setNomeDisciplina(nome);
				pdisc->setDepartamentoAssociado(pdep);
				LDisciplinas.incluaDisciplina(pdisc);
				cont_idDisc++;
			}
			else {
				cout << " departamento " << nomedep << " nao encontrado " << endl;
				cout << " disciplina " << nome << " nao incluida " << endl;
				cout << endl;
			}
		}
		cout << " As disciplinas foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarAlunos() {
	/*std::ifstream in("alunos.dat", std::ios::in);
	if (in) {
		char nome[150], nomedisc[150];
		int id, RA;
		while (in >> nome >> RA >> id >> nomedisc) {
			Disciplina* pdisc = LDisciplinas.localizar(nomedisc);
			if (pdisc) {
				Aluno* pal = new Aluno(id);
				pal->setNome(nome);
				pal->setRA(RA);
				pdisc->incluaAluno(pal);
				LAlunos.incluaAluno(pal);
				cont_idAluno++;
			}
			else {
				cout << " disciplina " << nomedisc << " nao encontrada " << endl;
				cout << " aluno " << nome << " nao incluido " << endl;
				cout << endl;
			}
		}
		cout << " Os alunos foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
	*/
}