#include "StdAfx.h"
#include "gestionEmprunteurs.h"
#include "listeEmprunteur.h"

gestionEmprunteurs* gestionEmprunteurs::instance = 0;

gestionEmprunteurs::gestionEmprunteurs(void)
{
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


/*Emprunteur* gestionEmprunteurs::nouveauEmprunteurs(std::string lenom, std::string leprenom, std::string lenumero, std::string larue, std::string lecodepostale, std::string laville, std::string lenumero_carte_identite="NULL")
{
	Emprunteur* NouvelEmprunteur;
	Adresse* L_Adresse;
	Adresse ladresseemprunteur(atoi(lenumero.c_str()), larue, atoi(lecodepostale.c_str()), laville);
	Date ladate_naissance;
	NouvelEmprunteur = new Emprunteur(lenom, leprenom, ladate_naissance, ladresseemprunteur, lenumero_carte_identite);
	ListeEmprunteur::getinstance()->ajout(NouvelEmprunteur);
	return NouvelEmprunteur;
}   */

void gestionEmprunteurs::setname(std::string  name)
{
	nom = name;
}

std::string gestionEmprunteurs::getname()
{
	return nom;
}


void nouveau()
{
	Emprunteurcourrent = new Emprunteur;
	// ici ajout dans la liste des empruteurs


}
void get(std::string cle)
{
	// recupération d'un emprunteur par rapport à la clé !

}

