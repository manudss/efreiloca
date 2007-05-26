#pragma once
#include "stdafx.h"
#include "vehicule.h"


class Flotte
{

private:
	
	vehicule recherche(string);

    int sauvegarder(void);

    int charger(void);

    void afficherliste(void);


private:
	Flotte(void);
	static Flotte* instance;
public:
	vehicule vehicule;
	static Flotte* getinstance();
private:
	~Flotte(void);
public:
	int num_vehicule;


};
