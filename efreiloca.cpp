// efreiloca.cpp : fichier projet principal.

#include "stdafx.h"
#include "Form1.h"
#include "listeEmprunteur.h"
#include "Flotte.h"
#include "ListeLocation.h"

using namespace efreiloca;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Activation des effets visuels de Windows XP avant la création de tout contrôle
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 



	// Création des classes :
	ListeEmprunteur::getinstance()->chargement();
	
	Flotte::getinstance()->chargement();
	ListeLocation::getinstance()->chargement();


	// Créer la fenêtre principale et l'exécuter
	Application::Run(gcnew Form1());


	// enregistrement des fichiers 
	ListeEmprunteur::getinstance()->enregistrement();
	Flotte::getinstance()->enregistrement();
	ListeLocation::getinstance()->enregistrement();
	
	return 0;
}
