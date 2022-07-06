#pragma once
#include <ctime>

class Time
{
public:
	
	Time();
	~Time();

	unsigned int getAno();
	unsigned int getMes();
	unsigned int getDia();

	void printTime();

private:

	time_t now;
	struct tm ltm;

	unsigned int anoAtual;
	unsigned int mesAtual;
	unsigned int diaAtual;


};

