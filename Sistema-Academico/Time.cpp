#include <iostream>
#include "Time.h"]

using namespace std;

Time::Time()
{
	// data/tempo atual baseado nesse sistema
	time(&now);
	localtime_s(&ltm, &now);

	anoAtual = ltm.tm_year + 1900;
	mesAtual = ltm.tm_mon + 1;
	diaAtual = ltm.tm_mday;

	/* 
	Caso necessario hora/minutos/segundos
	horaAtual = ltm.tm_hour + 5;
	minutoAtual = ltm.tm_min + 30;
	segundoAtual = ltm.tm_sec;

	fazer update do tempo local antes de retornar o valor!!! ou recebera o tempo desatualizado !
	*/
}

Time::~Time()
{
}

unsigned int Time::getAno()
{
	return anoAtual;
}

unsigned int Time::getMes()
{
	return mesAtual;
}

unsigned int Time::getDia()
{
	return diaAtual;
}

void Time::printTime()
{	
	#pragma warning(disable : 4996) // Melhorar no futuro.

	//converter now para forma de string
	char* dt = ctime(&now); 
	cout << "The local date and time is: " << dt << endl;

	// converter now para tm struct em UTC
	tm* gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "The UTC date and time is: " << dt << endl;

}
