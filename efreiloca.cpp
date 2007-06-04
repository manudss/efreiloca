// efreiloca.cpp�: fichier projet principal.

#include "stdafx.h"
#include "Form1.h"
#include "listeEmprunteur.h"
#include "Flotte.h"
#include "ListeLocation.h"

using namespace efreiloca;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Activation des effets visuels de Windows�XP avant la cr�ation de tout contr�le
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 



	// Cr�ation des classes :
	ListeEmprunteur::getinstance()->chargement();
	
	Flotte::getinstance()->chargement();
	ListeLocation::getinstance()->chargement();


	// Cr�er la fen�tre principale et l'ex�cuter
	Application::Run(gcnew Form1());


	// enregistrement des fichiers 
	ListeEmprunteur::getinstance()->enregistrement();
	Flotte::getinstance()->enregistrement();
	ListeLocation::getinstance()->enregistrement();
	
	return 0;
}
