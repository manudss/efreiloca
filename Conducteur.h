#pragma once
#include "StdAfx.h"

class Conducteur
{
public:
	Conducteur(void);
public:
	~Conducteur(void);
private:
	std::string nom;
    std::string prenom;
	Date date_naissance;
	bool permis_voiture;
    std::string num_permis;
	Date delivrance_permis;
	Date expiration_permis;
	bool permis_moto;
};
