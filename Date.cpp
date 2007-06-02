#include "stdafx.h"
#include "Date.h"

Date::Date(void)
{
	this->aaaa = 0;
	this->jj = 0;
	this->mm = 0;
}

Date::~Date(void)
{
}

//Date ( System::String^ value):DateValue(value)
//{

//}

void Date::set(std::string chaine)
{
	unsigned long a = atoi (chaine.c_str());

	jj = a / 1000000;
	mm = a / 10000 % 100;
	aaaa = a % 10000;

}

std::string Date::get ()
{

	std::string s,s1,s2,s3;
	char bidon[50];
	
	s1=itoa(jj,bidon,10);
	s2=itoa(mm,bidon,10);
	s3=itoa(aaaa,bidon,10);

	s= s1 + s2 + s3;

	return s;

}