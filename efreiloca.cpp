// efreiloca.cpp�: fichier projet principal.

#include "stdafx.h"
#include "Form1.h"
#include "listeEmprunteur.h"

using namespace efreiloca;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Activation des effets visuels de Windows�XP avant la cr�ation de tout contr�le
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 



	// Cr�ation des classes :
	
	

	// Cr�er la fen�tre principale et l'ex�cuter
	Application::Run(gcnew Form1());
	return 0;
}
