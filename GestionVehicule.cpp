#include "StdAfx.h"
#include "GestionVehicule.h"
#include "Exemplaire.h"
#include "Flotte.h"

GestionVehicule* GestionVehicule::instance = 0;

GestionVehicule::GestionVehicule(void)
{
	
	listevehicule = Flotte::getinstance();
	//chargement(0);
	chargementbegin();

}

GestionVehicule* GestionVehicule::getinstance()
{
	if ( instance == 0)
		instance = new GestionVehicule();
	return instance;
}

void GestionVehicule::chargementcour()
{
	this->Exemplairecourrent = this->listevehicule->returnExemplairecour();
}


void GestionVehicule::chargementbegin()
{
	this->listevehicule->flottebegin();
}

void GestionVehicule::chargementsuiv()
{
	this->listevehicule->flottesuiv();
}

void GestionVehicule::chargementprec()
{
	this->listevehicule->flotteprec();
}

int GestionVehicule::NbrEmprunteur()
{
	int retour = this->listevehicule->nbrExemplaire();		
	return retour;
}

void GestionVehicule::nouveau()
{
	this->Exemplairecourrent = new Exemplaire;
}

void  GestionVehicule::ajout()
{
	this->listevehicule->ajout(this->Exemplairecourrent);
}

void GestionVehicule::chargement(int i)
{
	this->listevehicule->flottebegin();
	 for (int j=0; j < i-1; j++)
		 this->listevehicule->flottesuiv();

	 this->Exemplairecourrent = this->listevehicule->returnExemplairecour();
}
