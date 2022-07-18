#include "ListaAlunos.h"
#include "Aluno.h"
#include "Disciplina.h"

ListaAlunos::ListaAlunos(Disciplina* disciplinaAfiliada, int max)
{
	ptrDisplina = disciplinaAfiliada;
	ptrInicioElAluno = NULL;
	ptrAtualElAluno = NULL;

	maxAlunos = max;
	alunosMatriculados = 0;
}

ListaAlunos::~ListaAlunos()
{
	alunosMatriculados = 0;
	maxAlunos = 0;

	ElAluno* aux = NULL;
	aux = ptrInicioElAluno;

	while (ptrInicioElAluno != NULL)
	{
		ptrInicioElAluno = aux->getProxElAluno();
		delete aux;
		aux = ptrInicioElAluno;
	}
	ptrAtualElAluno = NULL;
	ptrDisplina = NULL;
}

void ListaAlunos::setAluno(Aluno* novoAluno)
{
	if (novoAluno->getUniversidade() == ptrDisplina->getDepartamento()->GetUniFiliada()) {
		if (alunosMatriculados < (maxAlunos + 1)) {
			if (novoAluno != NULL) {
				ElAluno* aux = NULL;
				aux = new ElAluno();
				aux->setAluno(novoAluno);

				if (ptrInicioElAluno == NULL) {
					ptrInicioElAluno = aux;
					ptrAtualElAluno = aux;
				}
				else
				{
					ptrAtualElAluno->setProxElAluno(aux);
					aux->setUltimoElAluno(ptrAtualElAluno);
					ptrAtualElAluno = aux;
				}
				alunosMatriculados++;
			}
			else
			{
				std::cout << "NULL pointer recebido - não adicionado" << std::endl;
			}
		}
		else
		{
			std::cout << "Atencao - Numero Maximo de Alunos Exedido -> Não adicionado" << std::endl;
		}
	}
}

void ListaAlunos::setMaxAlunos(int maximum)
{
	if(maximum > 0)
	maxAlunos = maximum;
}

void ListaAlunos::printAlunos()
{
	ElAluno* aux;
	aux = ptrInicioElAluno;
	int counter = 1;

	while (aux != NULL)
	{
		std::cout << counter << " --> " << aux->getAluno()->getNome() << "/"
			<< aux->getAluno()->getRa() << std::endl;

		aux = aux->getProxElAluno();
		counter++;
	}
}

void ListaAlunos::printAlunosV2()
{
	ElAluno* aux;
	aux = ptrAtualElAluno;

	int counter = 0;

	while (aux != NULL)
	{
		counter++;
		aux = aux->getUltimoElAluno();
	}
	aux = ptrAtualElAluno;

	while (aux != NULL)
	{
		std::cout << counter << " --> " << aux->getAluno()->getNome() << "/"
			<<aux->getAluno()->getRa() << std::endl;

		aux = aux->getUltimoElAluno();
		counter--;
	}
}
