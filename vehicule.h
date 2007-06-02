#pragma once
#include "stdafx.h"


class vehicule
{

private:

public:
	vehicule(void);
	~vehicule(void);
	//setteurs
	void set_marque_vehicule(std::string);
	void set_modele_vehicule(std::string);
	void set_consommation(std::string);
	void set_place_assises (std::string);
	void set_puissance (std::string);
	void set_prix_j (std::string);
	void set_couleur (std::string);
	void set_carburant (std::string);

	//getteurs

	std::string get_marque_vehicule();
	std::string get_modele_vehicule();
	std::string get_consommation();
	std::string get_place_assises ();
	std::string get_puissance ();
	std::string get_prix_j ();
	std::string get_couleur ();
	std::string get_carburant ();

private:
	std::string marque_vehicule;
	std::string modele_vehicule;
	
	int consommation;
	int place_assises;
	int puissance;
	int prix_j;
	
	std::string couleur;
	std::string carburant;

};
