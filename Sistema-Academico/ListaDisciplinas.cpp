#include "ListaDisciplinas.h"
#include "Disciplina.h"

ListaDisciplinas::ListaDisciplinas(int max)
{
    maxNdisc = max;
    counter_Disc = 0;
    atualElDis = nullptr;
    incioElDis = nullptr;
}

ListaDisciplinas::~ListaDisciplinas()
{
    ElDisciplina* aux = nullptr;
    aux = incioElDis;

    while (incioElDis != nullptr) {
        incioElDis = aux->getProxEl();
        delete aux;
        aux = incioElDis;
    }
    atualElDis = nullptr;
}

void ListaDisciplinas::incluaDisciplina(Disciplina* newDis)
{
    if ((newDis != nullptr && counter_Disc < maxNdisc)||(newDis != nullptr && maxNdisc == -1)){
        ElDisciplina* aux = nullptr;
        aux = new ElDisciplina();
        aux->setDisplina(newDis);

        if (incioElDis == nullptr) {
            incioElDis = aux;
            atualElDis = aux;
            counter_Disc++;
        }
        else
        {
            atualElDis->setProxEl(aux);
            aux->setUltimoiEl(atualElDis);
            atualElDis = aux;
            counter_Disc++;
        }
    }
}

ElDisciplina* ListaDisciplinas::getDisciplinaInicio()
{
    return incioElDis;
}

void ListaDisciplinas::printDispinas()
{
    ElDisciplina* aux;
    aux = incioElDis;

    int counter = 1;

    while (aux != nullptr)
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

    while (aux != nullptr)
    {
        counter++;
        aux = aux->getUltimoEl();
    }
    aux = atualElDis;

    while (aux != nullptr)
    {
        std::cout << counter << " --> " << aux->getDisplina()->getNome() << "/"
            << aux->getDisplina()->getId() << std::endl;

        aux = aux->getUltimoEl();
        counter--;
    }
}
