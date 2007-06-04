#include "stdafx.h"
#include "gestionEmprunteurs.h"
#include "listeEmprunteur.h"

gestionEmprunteurs* gestionEmprunteurs::instance = 0;

gestionEmprunteurs::gestionEmprunteurs(void)
{
	ListeEmp = ListeEmprunteur::getinstance();
	this->chargementbegin();
	this->chargementcour();
}

gestionEmprunteurs::~gestionEmprunteurs(void)
{
}

gestionEmprunteurs* gestionEmprunteurs::getinstance()
{
	if (instance == 0)
		instance = new gestionEmprunteurs();
	return instance;
}




Emprunteur* nouveauEmprunteurs(std::string lenom, std::string leprenom, std::string lenumero, std::string larue, std::string lecodepostale, std::string laville, std::string lenumero_carte_identite="NULL")
{
	Emprunteur* NouvelEmprunteur;
	Adresse* L_Adresse;
	Adresse ladresseemprunteur(atoi(lenumero.c_str()), larue, atoi(lecodepostale.c_str()), laville);
	Date ladate_naissance;
	NouvelEmprunteur = new Emprunteur(lenom, leprenom, ladate_naissance, ladresseemprunteur, lenumero_carte_identite);
	//ListeEmprunteur::getinstance()->ajout(NouvelEmprunteur);
	return NouvelEmprunteur;
}   


void gestionEmprunteurs::setname(std::string  name)
{
	nom = name;
}

std::string gestionEmprunteurs::getname()
{
	return nom;
}

void gestionEmprunteurs::chargementcour()
{
	this->Emprunteurcourrent = this->ListeEmp->returnEmprunteurscour();
}


void gestionEmprunteurs::chargementbegin()
{
	this->ListeEmp->emprumteurbegin();
}

void gestionEmprunteurs::chargementsuiv()
{
	this->ListeEmp->emprumteursuiv();
}

void gestionEmprunteurs::chargementprec()
{
	this->ListeEmp->emprumteurprec();
}

int gestionEmprunteurs::NbrEmprunteur()
{
	int retour = this->ListeEmp->nbrEmprunteur();
	return retour;
}

void gestionEmprunteurs::nouveau()
{
	this->Emprunteurcourrent = new Emprunteur;
}

void  gestionEmprunteurs::ajout()
{
	this->ListeEmp->ajout(this->Emprunteurcourrent);
}

void gestionEmprunteurs::chargement(int i)
{
	 this->ListeEmp->emprumteurbegin();
	 for (int j=0; j < i-1; j++)
		this->ListeEmp->emprumteursuiv();

	 this->Emprunteurcourrent = this->ListeEmp->returnEmprunteurscour();
}



