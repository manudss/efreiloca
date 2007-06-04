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
	int ajout_tab(string s,Location * loc);	

private:

stdext::hash_map< std::string , Location* > tabLocation;
stdext::hash_map< std::string , Location* >:: iterator hash_iter;
typedef pair <std::string , Location* > Int_Pair;


};
