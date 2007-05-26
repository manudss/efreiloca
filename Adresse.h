#pragma once
#include "StdAfx.h"

class Adresse
{
public:
	Adresse(void);
	~Adresse(void);
	Adresse(int lenumero, std::string larue, int lecodepostale, std::string laville);

private:
	int numero;
	std::string rue;
    int codepostale;
	std::string ville;

};
