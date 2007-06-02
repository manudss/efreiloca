#pragma once
#include "stdafx.h"
#include "listeEmprunteur.h"

class gestionEmprunteurs
{
private:
	gestionEmprunteurs(void);
	~gestionEmprunteurs(void);
	static gestionEmprunteurs* instance;
	std::string nom;
	
	ListeEmprunteur* ListeEmp;
public:
	static gestionEmprunteurs* getinstance();
	//Emprunteur* nouveauEmprunteurs(std::string lenom, std::string leprenom, std::string lenumero, std::string larue, std::string lecodepostale, std::string laville, std::string lenumero_carte_identite);
	void setname(std::string  name);
	std::string getname();
	Emprunteur* Emprunteurcourrent;

	void nouveau();
	void get(std::string cle);
	void chargementcour();
	void chargementbegin();
	void chargementsuiv();
	int NbrEmprunteur();
	void ajout();
	void chargement(int i);
	




};
