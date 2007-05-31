#pragma once
#include <hash_map>
#include <vector>
#include "StdAfx.h"
#include "Date.h"
#include "Emprunteur.h"
#include <hash_map>

class ListeEmprunteur
{
private:
	ListeEmprunteur(void); 
	~ListeEmprunteur(void);
	static ListeEmprunteur* instance;
	int id;
public:
	static ListeEmprunteur* getinstance();
	void ajout(Emprunteur* nouveauEmprunteur); 
private:
	stdext::hash_map< std::string , Emprunteur* > TabEmprunteurs;

   

};
