#include "StdAfx.h"
#include "Adresse.h"

Adresse::Adresse(void)
{
}

Adresse::~Adresse(void)
{
}

Adresse::Adresse(int lenumero, std::string larue, int lecodepostale, std::string laville)
:numero(lenumero), rue(larue), codepostale(lecodepostale), ville(laville)
{
}

