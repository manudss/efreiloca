#pragma once
#include "StdAfx.h"
#include "Emprunteur.h"
#include "Exemplaire.h"

class Emprunteur ;

class Location
{
public:
	Location();
public:
	~Location();
	int chargement();
	int enregistrement();


	//setteurs

	void set (int a, std::string chain);
	void set_myEmprunteur (Emprunteur* emp);
	void set_myExemplaire (Exemplaire* ex);
	
	//getteurs
	std::string get (int a);
	Emprunteur* get_myEmprunteur ();
	Exemplaire* get_myExemplaire ();
	Date getdebut();
	Date getfin();
	



private:

	Emprunteur* myEmprunteur;
	Exemplaire* myExemplaire;
	
	std::string commentaires;
	int prix_tot;

	int numero;
    Date date_debut;
    Date date_fin;
	int heure_retour;
	int fini;
	std::string num_Emprunteur; //num_carte_ID emprunteur
	std::string num_Exemplaire; //num exemplaire

};
