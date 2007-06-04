#pragma once
#include "stdafx.h"

//#include "vehicule.h"
#include <hash_map>
//#include <vector>
#include "Location.h"
//#include "Date.h"

class ListeLocation
{
private:
	ListeLocation(void);
	~ListeLocation(void);
	static ListeLocation* instance;

public:
	static ListeLocation* getinstance();
	int chargement();
	int ajout(Location* nouvelle_loc);
	int enregistrement();
	int ajout_tab(static int i_loc,Location * loc);
	void devis (Location * loc);
	
	//fct pr interface:
	Location* returnLocationCour();
	void Locationbegin();
	void Locationsuiv();
	void Locationprec();
	int nbrLocation();

private:

stdext::hash_map< static int , Location* > tabLocation;
stdext::hash_map< static int , Location* >:: iterator hash_iter,iter_cour;
typedef pair < static int , Location* > Int_Pair;


};
