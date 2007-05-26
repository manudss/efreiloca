#include "StdAfx.h"
#include "Emprunteur.h"

Emprunteur::Emprunteur(void)
{
}

Emprunteur::~Emprunteur(void)
{
}

Emprunteur::Emprunteur(std::string lenom, std::string leprenom, Date ladate_naissance, Adresse ladresseemprunteur, std::string lenumero_carte_identite)
:nom(lenom), prenom(leprenom), date_naissance(ladate_naissance), adresseemprunteur(ladresseemprunteur), numero_carte_identite(lenumero_carte_identite) 
{
	permis_voiture = false;
	permis_moto = false;
}
