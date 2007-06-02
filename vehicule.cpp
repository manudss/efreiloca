#include "StdAfx.h"
#include "vehicule.h"

vehicule::vehicule(void)
{
}
vehicule::~vehicule(void)
{
}

//SETTEURS :
void vehicule::set_marque_vehicule(std::string s)
{
 marque_vehicule = s;
}

void vehicule::set_modele_vehicule(std::string s)
{
 modele_vehicule = s;
}
void vehicule::set_consommation(std::string s)
{
	consommation = atoi (s.c_str());
}

void vehicule::set_place_assises (std::string s)
{
	place_assises = atoi(s.c_str());
}
void vehicule::set_puissance (std::string s)
{
puissance = atoi (s.c_str());
}
void vehicule::set_prix_j (std::string s)
{
prix_j = atoi (s.c_str());
}
void vehicule::set_couleur (std::string s)
{
 couleur = s;
}
void vehicule::set_carburant (std::string s)
{
	carburant = s;
}

// GETTEURS :

std::string vehicule::get_marque_vehicule()
{
	return marque_vehicule;
}
std::string vehicule::get_modele_vehicule()
{
	return modele_vehicule;
}
std::string vehicule::get_consommation()
{
	
			char buffer[50];
			std::string s;			
			s= itoa(consommation,buffer,10);
			return s;
	
}
std::string vehicule::get_place_assises ()
{
			char buffer[50];
			std::string s;			
			s= itoa(place_assises,buffer,10);
			return s;
	
}
std::string vehicule::get_puissance ()
{
			char buffer[50];
			std::string s;			
			s= itoa(puissance,buffer,10);
			return s;
	
}
std::string vehicule::get_prix_j ()
{
			char buffer[50];
			std::string s;			
			s= itoa(prix_j,buffer,10);
			return s;
	
}
std::string vehicule::get_couleur ()
{
	return couleur;
}
std::string vehicule::get_carburant ()
{
	return carburant;
}