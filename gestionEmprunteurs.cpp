#include "StdAfx.h"
#include "gestionEmprunteurs.h"

gestionEmprunteurs* gestionEmprunteurs::instance = 0;

gestionEmprunteurs::gestionEmprunteurs(void)
{
}

gestionEmprunteurs::~gestionEmprunteurs(void)
{
}

gestionEmprunteurs* gestionEmprunteurs::getinstance()
{
	if (instance == 0)
		instance = new gestionEmprunteurs();
	return instance;
}
