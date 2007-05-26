#include "StdAfx.h"
#include "GestionVehicule.h"

GestionVehicule* GestionVehicule::instance = 0;

GestionVehicule::GestionVehicule(void)
{
}

GestionVehicule* GestionVehicule::getinstance()
{
	if ( instance = 0)
		instance = new GestionVehicule();
	return instance;
}
