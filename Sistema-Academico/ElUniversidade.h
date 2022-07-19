#pragma once
class Universidade;

class ElUniversidade
{
public:
	ElUniversidade();
	~ElUniversidade();

	void setProxElUni(ElUniversidade* nextElUni);
	void setUniversidade(Universidade* uni);

	ElUniversidade* getProxElUni();
	Universidade* getUniversidade();

private:
	Universidade* ptrUniversidade;
	ElUniversidade* ptrProxElUni;
};

