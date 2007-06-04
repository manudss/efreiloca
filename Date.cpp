#include "stdafx.h"
#include "Date.h"

Date::Date(void)
{
	this->aaaa = 2007;
	this->jj = 5;
	this->mm = 6;
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
		if ( jj > 31 )
		   jj = jj % 31;

		s1 = chaine[2];
		s2 = chaine[3];
		s = s1 + s2;
		mm= atoi ( s.c_str() );
		if (mm > 12)
			mm = mm %12; 

		s1 = chaine[4];
		s2 = chaine[5];
		s3 = chaine[6];
		s4 = chaine[7];
		s = s1 + s2 + s3 + s4;
		
		aaaa= atoi ( s.c_str() );

		if (aaaa < 1900)
			aaaa = aaaa % 100 + 1900;
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
	if(jj < 10 ) s1= '0'+ s1;
	if(mm < 10 ) s2= '0'+ s2;
	
	s= s1 + s2 + s3;

	
	
	return s;

}