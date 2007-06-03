#pragma once
#include "StdAfx.h"
#include "Emprunteur.h"

class Emprunteur ;

class Location
{
public:
	Location(void);
public:
	~Location(void);


	//Emprunteur::Emprunteur* Emprunteur;
	//Exemplaire* myExemplaire;
private:
	int numero;
    Date date_debut;
    Date date_fin;
	bool fini;

};
