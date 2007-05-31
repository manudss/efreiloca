// stdafx.cpp : fichier source incluant simplement les fichiers Include standard
// efreiloca.pch représente l'en-tête précompilé
// stdafx.obj contient les informations de type précompilées

#include "stdafx.h"


void ConvertString ( String ^ s, std::string& os ) {
			   using namespace Runtime::InteropServices;
			   const char* chars = 
				  (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

std::string ConvertString ( String ^ s) {
			   using namespace Runtime::InteropServices;
			   const char* chars = 
				  (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   string* os = new string;
			   *os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
			   return *os;
		}



