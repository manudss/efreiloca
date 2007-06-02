#pragma once
#include "stdafx.h"
#include "vehicule.h"
#include <hash_map>
#include <vector>
#include "Exemplaire.h"
#include "Date.h"

using namespace std;
using namespace stdext;

class Flotte
{

private:
	
	vehicule recherche(string);
    
    
    void afficherliste(void);


private:
	Flotte(void);
	static Flotte* instance;
	~Flotte(void);
	
    
	
public:
	Exemplaire exemplaire;
	static Flotte* getinstance();
	int num_vehicule; // ?
	int chargement();
	void ajout(Exemplaire* nouvelExemplaire);
	int enregistrement();
	
private:

stdext::hash_map< std::string , Exemplaire* > tabFlotte;
stdext::hash_map< std::string , Exemplaire* >:: iterator hash_iter;
typedef pair <std::string , Exemplaire* > Int_Pair;

	
};
