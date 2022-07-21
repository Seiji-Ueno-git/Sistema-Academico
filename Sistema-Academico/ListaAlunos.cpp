#include "ListaAlunos.h"
#include "Aluno.h"
#include "Disciplina.h"

ListaAlunos::ListaAlunos(int maximo)
{
	ptrDisplina = nullptr;
	ptrInicioElAluno = nullptr;
	ptrAtualElAluno = nullptr;

	maxAlunos = maximo;
	alunosMatriculados = 0;
}

ListaAlunos::ListaAlunos(Disciplina* disciplinaAfiliada, int max)
{
	ptrDisplina = disciplinaAfiliada;
	ptrInicioElAluno = nullptr;
	ptrAtualElAluno = nullptr;

	maxAlunos = max;
	alunosMatriculados = 0;
}

ListaAlunos::~ListaAlunos()
{
	alunosMatriculados = 0;
	maxAlunos = 0;

	ElAluno* aux = nullptr;
	aux = ptrInicioElAluno;

	while (ptrInicioElAluno != nullptr)
	{
		ptrInicioElAluno = aux->getProxElAluno();
		delete aux;
		aux = ptrInicioElAluno;
	}
	ptrAtualElAluno = nullptr;
	ptrDisplina = nullptr;
}

void ListaAlunos::setAluno(Aluno* novoAluno)
{
	if (novoAluno->getUniversidade() == ptrDisplina->getDepartamento()->GetUniFiliada()) {
		if (alunosMatriculados < (maxAlunos + 1)) {
			if (novoAluno != nullptr) {
				ElAluno* aux = nullptr;
				aux = new ElAluno();
				aux->setAluno(novoAluno);

				if (ptrInicioElAluno == nullptr) {
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
				std::cout << "nullptr pointer recebido - não adicionado" << std::endl;
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

	while (aux != nullptr)
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

	while (aux != nullptr)
	{
		counter++;
		aux = aux->getUltimoElAluno();
	}
	aux = ptrAtualElAluno;

	while (aux != nullptr)
	{
		std::cout << counter << " --> " << aux->getAluno()->getNome() << "/"
			<<aux->getAluno()->getRa() << std::endl;

		aux = aux->getUltimoElAluno();
		counter--;
	}
}
