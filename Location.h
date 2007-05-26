#pragma once
#include "StdAfx.h"
#include "Emprunteur.h"

class Location
{
public:
	Location(void);
public:
	~Location(void);

private:
	//Emprunteur* myEmprunteur;
	//Exemplaire* myExemplaire;

	int numero;
    Date date_debut;
    Date date_fin;
	bool fini;

};
