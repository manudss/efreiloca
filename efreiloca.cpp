// efreiloca.cpp : fichier projet principal.

#include "stdafx.h"
#include "Form1.h"
#include "listeEmprunteur.h"
#include "Flotte.h"

using namespace efreiloca;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Activation des effets visuels de Windows XP avant la création de tout contrôle
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	

	// Création des classes :
	ListeEmprunteur::getinstance()->chargement();
	ListeEmprunteur::getinstance()->enregistrement();
	Flotte::getinstance()->chargement();
	Flotte::getinstance()->enregistrement();

	// Créer la fenêtre principale et l'exécuter
	Application::Run(gcnew Form1());

	
	return 0;
}
