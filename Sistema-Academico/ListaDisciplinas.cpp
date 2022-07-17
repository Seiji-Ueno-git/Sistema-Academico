#include "ListaDisciplinas.h"
#include "Disciplina.h"

ListaDisciplinas::ListaDisciplinas()
{
    atualElDis = NULL;
    incioElDis = NULL;
}

ListaDisciplinas::~ListaDisciplinas()
{
    ElDisciplina* aux = NULL;
    aux = incioElDis;

    while (incioElDis != NULL) {
        incioElDis = aux->getProxEl();
        delete aux;
        aux = incioElDis;
    }
    atualElDis = NULL;
}

void ListaDisciplinas::setAtualElDis(ElDisciplina* newAtDis)
{
    if (newAtDis != NULL)
        atualElDis = newAtDis;
}

void ListaDisciplinas::setInicioElDis(ElDisciplina* newInDis)
{
    if (newInDis != NULL)
        incioElDis = newInDis;
}

ElDisciplina* ListaDisciplinas::getAtualElDis()
{
    return atualElDis;
}

ElDisciplina* ListaDisciplinas::getInicioElDis()
{
    return incioElDis;
}

void ListaDisciplinas::setNovaDisciplina(Disciplina* newDis)
{
    if (newDis != NULL) {
        ElDisciplina* aux = NULL;
        aux = new ElDisciplina();
        aux->setDisplina(newDis);

        if (incioElDis == NULL) {
            incioElDis = aux;
            atualElDis = aux;
        }
        else
        {
            atualElDis->setProxEl(aux);
            aux->setUltimoiEl(atualElDis);
            atualElDis = aux;
        }
    }
}

void ListaDisciplinas::printDispinas()
{
    ElDisciplina* aux;
    aux = incioElDis;

    int counter = 1;

    while (aux != NULL)
    {
        std::cout << counter << " --> " << aux->getDisplina()->getNome() << "/"
            << aux->getDisplina()->getId() << "\n Alunos: " << std::endl;
        aux->getDisplina()->printAlunoS();

        std::cout << std::endl;

        aux = aux->getProxEl();
        counter++;
    }
}

void ListaDisciplinas::printDisInReverse()
{
    ElDisciplina* aux;
    aux = atualElDis;

    int counter = 0;

    while (aux != NULL)
    {
        counter++;
        aux = aux->getUltimoEl();
    }
    aux = atualElDis;

    while (aux != NULL)
    {
        std::cout << counter << " --> " << aux->getDisplina()->getNome() << "/"
            << aux->getDisplina()->getId() << std::endl;

        aux = aux->getUltimoEl();
        counter--;
    }
}
