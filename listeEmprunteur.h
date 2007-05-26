#pragma once
#include <hash_map>
#include <vector>
#include "StdAfx.h"
#include "Date.h"
#include "Emprunteur.h"
#include <hash_map>

class ListeEmprunteur
{
public:
	ListeEmprunteur(void);
	~ListeEmprunteur(void);
private:
	stdext::hash_map< Date, Emprunteur > TabEmprunteurs;

   

};
