#include "StdAfx.h"
#include "listeEmprunteur.h"

ListeEmprunteur* ListeEmprunteur::instance = 0;

ListeEmprunteur::ListeEmprunteur(void)
{
}

ListeEmprunteur::~ListeEmprunteur(void)
{
}

ListeEmprunteur* ListeEmprunteur::getinstance()
{
	if ( instance == 0)
	{
		instance = new ListeEmprunteur();
	}
	return instance;
}
