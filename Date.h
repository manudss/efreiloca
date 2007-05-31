#include <string>
#pragma once

class Date
{
public:
	Date(void);
	~Date(void);
	//Date ( System::String^ value);
private:
	int jj;
	int mm;
	int aaaa;

	std::string   DateValue;
};
