#pragma once
#include "Universidade.h"
#include "ListaUniversidades.h"
#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"
#include "ListaAlunos.h"

class Principal
{
public:
	Principal();
	~Principal();
	
	void executar();
	
	// Menus
	void menu();
	void menuCad();
	void menuExe();
	void MenuGravar();
	void MenuRecuperar();

	// Cadastro de Objetos
	void cadUniversidade();
	void cadDepartamento();
	void cadDisciplina();
	void cadAlunos();

	// Gravar Objetos
	void GravarTudo();
	void GravarUniversidades();
	void GravarDepartamentos();
	void GravarDisciplinas();
	void GravarAlunos();	

	// Recuperar Objetos
	void RecuperarTudo();
	void RecuperarUniversidades();
	void RecuperarDepartamentos();
	void RecuperarDisciplinas();
	void RecuperarAlunos();

private:
	// Contadores para identificadores;
	int cont_idUniv;
	int cont_idDepart;
	int cont_idDisc;
	int cont_idAluno;

	// Listas
	ListaUniversidades LUniversidades;
	ListaDepartamentos LDepartamentos;    
	ListaDisciplinas LDisciplinas;
	ListaAlunos LAlunos;
};

