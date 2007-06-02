#include "StdAfx.h"
#include "Adresse.h"

Adresse::Adresse(void)
{
	this->codepostale = 0;
	this->numero = 0;
	this->rue = "";
	this->ville = "";
}

Adresse::~Adresse(void)
{
}

Adresse::Adresse(int lenumero, std::string larue, int lecodepostale, std::string laville)
:numero(lenumero), rue(larue), codepostale(lecodepostale), ville(laville)
{
}

void Adresse::set_numero(std::string chaine)
{
	numero = atoi (chaine.c_str());

}

void Adresse::set_rue(std::string chaine)
{
	rue = chaine;

}

void Adresse::set_codepostale(std::string chaine)
{
	codepostale = atoi (chaine.c_str());

}

void Adresse::set_ville(std::string chaine)
{
	ville = chaine;

}

//Getteurs
char buffer[50];

std::string Adresse::get_numero ()
{
	return itoa(numero,buffer, 10);
}

std::string Adresse::get_rue ()
{
return rue;
}
std::string Adresse::get_codepostale ()
{
return itoa(codepostale,buffer,10);
}

std::string Adresse::get_ville ()
{
return ville;
}