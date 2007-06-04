#pragma once

#include "StdAfx.h";
#include "Flotte.h";


class GestionVehicule
{
private:
	GestionVehicule(void);
	~GestionVehicule(void);
	static GestionVehicule* instance;
	

public:
	static GestionVehicule* getinstance();
	Exemplaire * Exemplairecourrent;
	Flotte * listevehicule;

	void nouveau();
	void get(std::string cle);
	void chargementcour();
	void chargementbegin();
	void chargementsuiv();
	void chargementprec();
	int NbrEmprunteur();
	void ajout();
	void chargement(int i);

};
