#include "StdAfx.h"
#include "Exemplaire.h"
#include "Adresse.h"
#include "Conducteur.h"
#include "Location.h"
#include "Date.h"
#include <string.h>

Exemplaire::Exemplaire(void)
{
	this->disponible = 0;
	this->etat = "";
	this->nb_kilometres = 0;
	this->niveau_essence = 0;
	this->ref = "";
	this->type = "";
	
}

Exemplaire::~Exemplaire(void)
{
}

void Exemplaire::set (int a, std::string chain)
{
	switch (a) 
	{
		case 0 :
			disponible = atoi(chain.c_str()); break;
		case 1 :
			niveau_essence = atoi(chain.c_str()); break;
		case 2 :
			nb_kilometres = atoi(chain.c_str()); break;
		case 3 :
			etat=chain;break;
		case 4 :  
			ref= chain; break;
		case 5 : 
			V.set_marque_vehicule(chain); break;
		case 6 : 
			V.set_modele_vehicule(chain);break;
		case 7 : 
			V.set_consommation(chain);break;
		case 8 : 
			V.set_place_assises(chain);break;
		case 9 : 
			V.set_puissance(chain);break;
		case 10 :
			V.set_prix_j(chain);break;
		case 11 :
			V.set_couleur(chain);break;
		case 12 :
			V.set_carburant(chain);break;
		case 13 :
			type = chain; break;
		case 14 :
			depart.set(chain); break;
		case 15 :
			rendu.set(chain); break;
		

		default : 
			break;
	}
}

std::string Exemplaire::get (int a)
{


switch (a) 
	{
		case 0 :
			{
			char buffer[50];
			std::string s;			
			s= itoa(disponible,buffer,10);
			return s; break;
			}
		case 1 :
			{
			char buffer[50];
			std::string s;			
			s= itoa(niveau_essence,buffer,10);
			return s; break;
			}
		case 2 :
			{
			char buffer[50];
			std::string s;			
			s= itoa(nb_kilometres,buffer,10);
			return s; break;
			}
		case 3 :
			return etat;break;
		case 4 :  
			return ref; break;
		case 5 : // !
			 return V.get_marque_vehicule();break;
		case 6 : 
			return V.get_modele_vehicule();break;
		case 7 : 
			return V.get_consommation();break;
		case 8 : 
			return V.get_place_assises();break;
		case 9 : 
			return V.get_puissance();break;
		case 10 :
			 return V.get_prix_j();break;
		case 11 :
			 return V.get_couleur();break;
		case 12 :
			 return V.get_carburant();break;
		case 13 :
			 return type;
		case 14 :
			 return depart.get();break;
		case 15 :
			 return rendu.get(); break;

		default:
		break;
	}

}