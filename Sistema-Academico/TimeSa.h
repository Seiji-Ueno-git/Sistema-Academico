#pragma once
#include <iostream>
#include <ctime>

class TimeSa
{
public:

	TimeSa();
	~TimeSa();

	void atualizarTempo();

	int getAno();
	int getMes();
    int getDia();

	int getHora();
	int getMinutos();
	int getSegundos();

private:

	time_t segundos;
	struct tm ltm;

};