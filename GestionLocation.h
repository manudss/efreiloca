#pragma once
#include "stdafx.h"
#include "ListeLocation.h"

class GestionLocation
{
private :
	GestionLocation(void);
	~GestionLocation(void);

	static GestionLocation* instance;
	std::string nom;
	ListeLocation* ListeLoc;

	public:
	static GestionLocation* getinstance();
	
	//void setname(std::string  name);
	//std::string getname();
	Location* LocCourante;

	void nouveau();
	//void get(std::string cle);
	void chargementcour();
	void chargementbegin();
	void chargementsuiv();
	void chargementprec();
	int NbrLoc();
	void ajout();
	void chargement(int i);
};
