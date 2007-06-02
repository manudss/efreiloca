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
	void setpermisauto(std::string le_num_permisauto, Date la_delivrance_permis_voiture,	Date l_expiration_permis_voiture);
	void setpermismoto(std::string le_num_permismoto, Date la_delivrance_permis_moto,	Date l_expiration_permis_moto);
	
	//setteur
	void set (int , std::string) ;

	//Getter:

	std::string get (int);

private:
	int id;
	std::string nom;
	std::string prenom;
	Date date_naissance;
	std::string numero_carte_identite;
	Adresse adresseemprunteur; //num,rue, CP, ville
    bool permis_voiture;
	std::string numero_permisauto;
	Date delivrance_permis_voiture;
	Date expiration_permis_voiture;
	bool permis_moto;
	Date delivrance_permis_moto;
	Date expiration_permis_moto;
    std::string numero_permismoto;
	Conducteur* autre_conducteur[4];
	

private:
	stdext::hash_map< Date, Location > TabLocation;

};
