#pragma once
#include "StdAfx.h"

class Adresse
{
public:
	Adresse(void);
	~Adresse(void);

private:
	int numero;
	std::string rue;
    int codepostale;
	std::string ville;

};
