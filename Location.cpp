#include "StdAfx.h"
#include "Location.h"

Location::Location(void)
{
	this->myEmprunteur = 0;
	this->myExemplaire = 0;
	this->commentaires = "";
	this->fini = false;
	this->heure_retour = 0;
	this->prix_tot = 0;
	this->numero = 0;
}

Location::~Location(void)
{
}




//SETteurs :

void Location::set_myEmprunteur (Emprunteur* emp)
{
 myEmprunteur = emp; 
}
void Location::set_myExemplaire (Exemplaire* ex)
{
 myExemplaire = ex;
}

void Location::set (int a, std::string chain)
{

	switch (a)
	{
	case 0:
		commentaires = chain; break;

	case 1:
		prix_tot= atoi (chain.c_str()); break;

	case 2:
		numero = atoi(chain.c_str());break;

	case 3:
	date_debut.set(chain);break;

	case 4:
		date_fin.set(chain);break;

	case 5:
		heure_retour = atoi(chain.c_str());break;

	case 6:
		fini = atoi (chain.c_str());break;

	case 7:
		num_Emprunteur = chain;break;

	case 8:
		num_Exemplaire = chain;break;
	
		
	
	default:
		break;
	
	}
}


///
//GETteurs :


Emprunteur* Location::get_myEmprunteur ()
{
	return myEmprunteur;
}

Exemplaire* Location::get_myExemplaire ()
{
	return myExemplaire;
}

Date Location::getdebut()
{
	return this->date_debut;
}

Date Location::getfin()
{
	return this->date_fin;
}


std::string Location::get (int a)
{

switch (a)
	{
	case 0 :
		return commentaires; break;
	case 1 :
		{
			char buffer[50];
			std::string s;			
			s= itoa(prix_tot,buffer,10);
			return s; break;
		}
	case 2 :
		{
			char buffer[50];
			std::string s;			
			s= itoa(numero,buffer,10);
			return s; break;
		}
	case 3 :
	return date_debut.get(); break;

	case 4 :
		return date_fin.get(); break;

	case 5 :
		{
			char buffer[50];
			std::string s;			
			s= itoa(heure_retour,buffer,10);
			return s; break;
		}

	case 6 :
		{
			char buffer[50];
			std::string s;			
			s= itoa(fini,buffer,10);
			return s; break;
		}

	case 7 :
		return num_Emprunteur; break;

	case 8 :
		return num_Exemplaire; break;

	default:
		return "0";
		break;


	}
}


/////