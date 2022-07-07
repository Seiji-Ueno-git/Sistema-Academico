#include "TimeSa.h"

using std::cout;
using std::endl;



TimeSa::TimeSa()
{
	// data/tempo atual baseado nesse sistema
	time(&segundos);
	localtime_s(&ltm, &segundos);
}

TimeSa::~TimeSa()
{
}

void TimeSa::atualizarTempo()
{
	time(&segundos);
	localtime_s(&ltm, &segundos);
}

int TimeSa::getAno()
{
	return ltm.tm_year + 1900;
}

int TimeSa::getMes()
{
	return ltm.tm_mon + 1;
}

int TimeSa::getDia()
{
	return  ltm.tm_mday;
}

int TimeSa::getHora()
{
	return ltm.tm_hour + 1;
}

int TimeSa::getMinutos()
{
	return ltm.tm_min + 1;
}

int TimeSa::getSegundos()
{
	return ltm.tm_sec;
}
