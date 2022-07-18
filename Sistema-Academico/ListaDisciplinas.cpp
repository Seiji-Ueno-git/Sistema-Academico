#include "ListaDisciplinas.h"
#include "Disciplina.h"

ListaDisciplinas::ListaDisciplinas(int max)
{
    maxNdisc = max;
    counter_Disc = 0;
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

void ListaDisciplinas::setNovaDisciplina(Disciplina* newDis)
{
    if ((newDis != NULL && counter_Disc < maxNdisc)||(newDis != NULL && maxNdisc == -1)){
        ElDisciplina* aux = NULL;
        aux = new ElDisciplina();
        aux->setDisplina(newDis);

        if (incioElDis == NULL) {
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
