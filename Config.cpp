#include "StdAfx.h"
#include "Config.h"

Config* Config::instance = 0;

Config::Config(void)
{
}

Config::~Config(void)
{
}

Config* Config::getinstance()
{
	if (instance = 0)
		instance = new Config();
	return instance;
}
