#include "StdAfx.h"
#include "Conducteur.h"

Conducteur::Conducteur(void)
{
}

Conducteur::~Conducteur(void)
{
}

//Setteurs :

void Conducteur::set_nom (std::string chaine)
{
	nom=chaine ;	
}

void Conducteur::set_prenom (std::string chaine)
{
	prenom=chaine ;
}
void Conducteur::set_date_naissance (std::string chaine)
{
	date_naissance.set(chaine);
}
void Conducteur::set_permis_voiture (std::string chaine)
{
	permis_voiture = atoi (chaine.c_str());
}
void Conducteur::set_num_permis (std::string chaine)
{
	num_permis= chaine;
}
void Conducteur::set_delivrance_permis (std::string chaine)
{
	delivrance_permis.set(chaine);
}
void Conducteur::set_expiration_permis (std::string chaine)
{
	expiration_permis.set(chaine);
}
void Conducteur::set_permis_moto (std::string chaine)
{
	permis_moto = atoi (chaine.c_str());
}

//Getteurs

std::string Conducteur::get_nom()
{
 return nom;
}

std::string Conducteur::get_prenom()
{
 return prenom;
}
std::string Conducteur::get_date_naissance()
{
 return date_naissance.get();
}

std::string Conducteur::get_permis_voiture()
{
 if (permis_voiture)return "1";
 else return "0";
}


std::string Conducteur::get_num_permis()
{
 return num_permis;
}

std::string Conducteur::get_delivrance_permis()
{
 return delivrance_permis.get();
}

std::string Conducteur::get_expiration_permis()
{
 return expiration_permis.get();
}

std::string Conducteur::get_permis_moto()
{
	if (permis_moto)return "1";
 else return "0";
}

