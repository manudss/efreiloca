#pragma once

class ListeLocation
{
private:
	ListeLocation(void);
	~ListeLocation(void);
	static ListeLocation* instance;

public:
	static ListeLocation* getinstance();

};
