#pragma once
#include "StdAfx.h"
#include "Adresse.h"
#include "Conducteur.h"
#include "Location.h"
#include "Date.h"
#include <hash_map>

class Emprunteur
{
public:
	Emprunteur(void);
	Emprunteur(std::string lenom, std::string leprenom, Date ladate_naissance, Adresse ladresseemprunteur, std::string lenumero_carte_identite="NULL");
public:
	~Emprunteur(void);
private:
	std::string nom;
	std::string prenom;
	Date date_naissance;
	std::string numero_carte_identite;
	Adresse adresseemprunteur;
    bool permis_voiture;
	std::string num_permisauto;
	Date delivrance_permis_voiture;
	Date expiration_permis_voiture;
	bool permis_moto;
	Date delivrance_permis_moto;
	Date expiration_permis_moto;
    std::string numero_permisvoiture;
	Conducteur* autre_conducteur[4];
	int id;

private:
	stdext::hash_map< Date, Location > TabLocation;
};
