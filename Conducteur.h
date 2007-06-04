#pragma once
#include "StdAfx.h"
#include "Date.h"

class Conducteur
{
public:
	Conducteur(void);
public:
	~Conducteur(void);
	//SETeurs :
	void set_nom(std::string) ;
	void set_prenom(std::string) ;
	void set_date_naissance(std::string) ;
	void set_permis_voiture(std::string) ;
	void set_num_permis(std::string) ;
	void set_delivrance_permis(std::string) ;
	void set_expiration_permis(std::string) ;
	void set_permis_moto(std::string) ;

	//Getteurs
	std::string get_nom();
	std::string get_prenom();
	std::string get_date_naissance();
	std::string get_permis_voiture();
	std::string get_num_permis();
	std::string get_delivrance_permis();
	std::string get_expiration_permis();
	std::string get_permis_moto();

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
