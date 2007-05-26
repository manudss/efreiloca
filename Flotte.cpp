#include "StdAfx.h"
#include "Flotte.h"

Flotte* Flotte::instance = 0;

Flotte::Flotte(void)
{
}

Flotte::~Flotte(void)
{
}

Flotte* Flotte::getinstance()
{
	if (instance == 0)
		instance = new Flotte();
	return instance;
}
