#pragma once
#include "stdafx.h"
#include "Date.h"
#include "vehicule.h"

class Exemplaire
{
public:
	Exemplaire(void);
	~Exemplaire(void);

//setteur :
	void set(int, std::string);

//getteur :
	std::string get(int);// !
	stdext::hash_map< static int, Location* > TabLocation;
	


private :
	int disponible; 
	int niveau_essence; // en quart de plein , ex : 1, 2, 3, 4
	int nb_kilometres;
	std::string etat;
	std::string ref; //num immatriculation : clef !
	vehicule V;
	std::string type;//sport, familiale,scooter ..
	Date depart;
	Date rendu;



};
