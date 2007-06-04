#pragma once
#include <hash_map>
#include <vector>
#include "StdAfx.h"
#include "Date.h"
#include "Emprunteur.h"
#include <hash_map>

using namespace std;
using namespace stdext;

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
	Emprunteur* recup_emprunteur (std::string num) ;

	int chargement () ;
	int enregistrement() ;
	

	Emprunteur* returnEmprunteurscour();
	void emprumteurbegin();
	void emprumteursuiv();
	int nbrEmprunteur();
	void emprumteurprec();
	

private:

	stdext::hash_map< std::string , Emprunteur* > TabEmprunteurs;
	stdext::hash_map< std::string , Emprunteur* >:: iterator hash_iter, iter_cour, it;
	typedef pair <std::string , Emprunteur* > Int_Pair;


};
