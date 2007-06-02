#pragma once
#include "StdAfx.h"

class Adresse
{
public:
	Adresse(void);
	~Adresse(void);
	Adresse(int lenumero, std::string larue, int lecodepostale, std::string laville);
	//set :
	void set_numero (std::string);
	void set_rue (std::string);
	void set_codepostale (std::string);
	void set_ville (std::string);

	//get :
	std::string get_numero ();
	std::string get_rue ();
	std::string get_codepostale ();
	std::string get_ville ();


private:
	int numero;
	std::string rue;
    int codepostale;
	std::string ville;

};
