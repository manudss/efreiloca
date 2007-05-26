#include "StdAfx.h"
#include "ListeLocation.h"

ListeLocation* ListeLocation::instance = 0;

ListeLocation::ListeLocation(void)
{
}

ListeLocation::~ListeLocation(void)
{
}

ListeLocation* ListeLocation::getinstance()
{
	if ( instance == 0)
		instance = new ListeLocation();
	return instance;
}
