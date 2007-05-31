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

void Emprunteur::setpermisauto(std::string le_num_permisauto, Date la_delivrance_permis_voiture,	Date l_expiration_permis_voiture)
{
	permis_voiture = true;
	numero_permisauto = le_num_permisauto;
	delivrance_permis_voiture = la_delivrance_permis_voiture;
	expiration_permis_voiture =  l_expiration_permis_voiture;
}

void Emprunteur::setpermismoto(std::string le_num_permismoto, Date la_delivrance_permis_moto,	Date l_expiration_permis_moto)
{
   permis_moto = true;
	numero_permismoto = le_num_permismoto;
	delivrance_permis_moto = la_delivrance_permis_moto;
	expiration_permis_moto =  l_expiration_permis_moto;
}

/*void setnom(std::string name){nom = name;}
std::string getnom(){return nom;}

void setprenom(std::string name){prenom = name;}
std::string getprenom(){return prenom;}

void setidentite(std::string name){numero_carte_identite = name;}
std::string getidentite(){return numero_carte_identite;}

void setnumrue(std::string name){adresseemprunteur.setnumrue(name);}
	std::string getnumrue(return adresseemprunteur.getnumrue(););

	void setrue(std::string name){adresseemprunteur.setrue(name);}
	std::string getrue(return adresseemprunteur.getrue(););

	void setcodepostal(std::string name){adresseemprunteur.secodepostal(name);}
	std::string getcodepostal(){return adresseemprunteur.gecodepostal();}

	void setville(std::string name){adresseemprunteur.setrue(name);}
	std::string getville(){return adresseemprunteur.setrue(name);}

	void setnaissance(Date n);
	Date getnaissance();

	void setpermisvoiture(bool perm);
	bool getpermisvoiture();

	void setnumpermisvoiture(std::string name);
	std::string getnumpermisvoiture();

	void setdebutpermisvoiture(Date n);
	Date getdebutpermisvoiture();

	void setfinpermisvoiture(Date n);
	Date getfinpermisvoiture();

	void setpermismoto(bool perm);
	bool getpermismoto();

	void setnumpermismoto(std::string name);
	std::string getnumpermismoto();

	void setdebutpermisvmoto(Date n);
	Date getdebutpermismoto();

	void setfinpermismoto(Date n);
	Date getfinpermismoto();

*/

std::string getidentite(){return numero_carte_identite;}