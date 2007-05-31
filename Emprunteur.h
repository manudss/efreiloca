#pragma once
#include "StdAfx.h"
#include "Adresse.h"
#include "Conducteur.h"
#include "Location.h"
#include "Date.h"
#include <hash_map>

class Emprunteur
{
public:
	Emprunteur(void);
	Emprunteur(std::string lenom, std::string leprenom, Date ladate_naissance, Adresse ladresseemprunteur, std::string lenumero_carte_identite="NULL");
public:
	~Emprunteur(void);
	
	void setpermisauto(std::string le_num_permisauto, Date la_delivrance_permis_voiture,	Date l_expiration_permis_voiture);
	void setpermismoto(std::string le_num_permismoto, Date la_delivrance_permis_moto,	Date l_expiration_permis_moto);
	/*
	inline void setnom(std::string name);
	inline std::string getnom();

	inline void setprenom(std::string name);
	inline std::string getprenom();

	inline void setidentite(std::string name);
	

	inline void setnumrue(std::string name);
	inline std::string getnumrue();

	inline void setrue(std::string name);
	inline std::string getrue();

	inline void setcodepostal(std::string name);
	inline std::string getcodepostal();

	inline void setville(std::string name);
	inline std::string getville();

	inline void setnaissance(Date n);
	inline Date getnaissance();

	inline void setpermisvoiture(bool perm);
	inline bool getpermisvoiture();

	inline void setnumpermisvoiture(std::string name);
	inline std::string getnumpermisvoiture();

	inline void setdebutpermisvoiture(Date n);
	inline Date getdebutpermisvoiture();

	inline void setfinpermisvoiture(Date n);
	inline Date getfinpermisvoiture();

	inline void setpermismoto(bool perm);
	inline bool getpermismoto();

	inline void setnumpermismoto(std::string name);
	inline std::string getnumpermismoto();

	inline void setdebutpermisvmoto(Date n);
	inline Date getdebutpermismoto();

	inline void setfinpermismoto(Date n);
	inline Date getfinpermismoto();

	*/

	inline std::string getidentite();

private:
	std::string nom;
	std::string prenom;
	Date date_naissance;
	std::string numero_carte_identite;
	Adresse adresseemprunteur;
    bool permis_voiture;
	std::string numero_permisauto;
	Date delivrance_permis_voiture;
	Date expiration_permis_voiture;
	bool permis_moto;
	Date delivrance_permis_moto;
	Date expiration_permis_moto;
    std::string numero_permismoto;
	Conducteur* autre_conducteur[4];
	int id;

private:
	stdext::hash_map< Date, Location > TabLocation;
};
