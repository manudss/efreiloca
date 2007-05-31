#pragma once

class gestionEmprunteurs
{
private:
	gestionEmprunteurs(void);
	~gestionEmprunteurs(void);
	static gestionEmprunteurs* instance;
	std::string nom;
	Emprunteur* Emprunteurcourrent;
public:
	static gestionEmprunteurs* getinstance();
	//Emprunteur* nouveauEmprunteurs(std::string lenom, std::string leprenom, std::string lenumero, std::string larue, std::string lecodepostale, std::string laville, std::string lenumero_carte_identite);
	void setname(std::string  name);
	std::string getname();

	void nouveau();
	void get(std::string cle);




};
