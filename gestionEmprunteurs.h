#pragma once

class gestionEmprunteurs
{
private:
	gestionEmprunteurs(void);
	~gestionEmprunteurs(void);
	static gestionEmprunteurs* instance;
public:
	static gestionEmprunteurs* getinstance();


};
