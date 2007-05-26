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


public:
	Flotte(void);
	vehicule vehicule;
public:
	~Flotte(void);
	int num_vehicule;


};
