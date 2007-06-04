#include "StdAfx.h"
#include "GestionLocation.h"
#include "ListeLocation.h"

GestionLocation* GestionLocation::instance =0;

GestionLocation::GestionLocation(void)
{
ListeLoc = ListeLocation::getinstance();
}

GestionLocation::~GestionLocation(void)
{
}

GestionLocation* GestionLocation::getinstance()
{
	if (instance == 0)
		instance = new GestionLocation();
	return instance;
}


////////////////////////

void GestionLocation::chargementcour()
{
	this->LocCourante = this->ListeLoc->returnLocationCour();
}


void GestionLocation::chargementbegin()
{
	this->ListeLoc->Locationbegin();
}

void GestionLocation::chargementsuiv()
{
	this->ListeLoc->Locationsuiv();
}

void GestionLocation::chargementprec()
{
	this->ListeLoc->Locationprec();
}

int GestionLocation::NbrLoc()
{
	int retour = this->ListeLoc->nbrLocation();
	return retour;
}

void GestionLocation::nouveau()
{
	this->LocCourante = new Location;
}

void  GestionLocation::ajout()
{
	this->ListeLoc->ajout(this->LocCourante);
}

void GestionLocation::chargement(int i)
{
	 this->ListeLoc->Locationbegin();
	 for (int j=0; j < i-1; j++)
		this->ListeLoc->Locationsuiv();

	 this->LocCourante = this->ListeLoc->returnLocationCour();
}

