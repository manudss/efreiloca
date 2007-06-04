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
int Date::getjj()
{
	return jj;
}

int Date::getmm()
{
	return mm;
}

int Date::getaaaa()
{
	return aaaa;
}

//Date ( System::String^ value):DateValue(value)
//{

//}

void Date::set(std::string chaine)
{
	std::string s,s1,s2,s3,s4;
	char buffer[60];
	int intchaine = atoi (chaine.c_str());
	if (intchaine != 0)
	{
		s1 = chaine[0];
		s2 = chaine[1];
		s = s1 + s2;
		jj = atoi ( s.c_str() );

		s1 = chaine[2];
		s2 = chaine[3];
		s = s1 + s2;
		mm= atoi ( s.c_str() );

		s1 = chaine[4];
		s2 = chaine[5];
		s3 = chaine[6];
		s4 = chaine[7];
		s = s1 + s2 + s3 + s4;
		
		aaaa= atoi ( s.c_str() );
	}
	
}

std::string Date::get ()
{

	std::string s,s1,s2,s3;
	char bidon[50];
	
	s1=itoa(jj,bidon,10);
	s2=itoa(mm,bidon,10);
	s3=itoa(aaaa,bidon,10);

	//s= s1 + '/'+ s2 + '/'  + s3;
	if(s1.size() < 2 ) s1= '0'+ s1;
	if(s2.size() < 2 ) s2= '0'+ s2;
	
	s= s1 + s2 + s3;

	
	
	return s;

}