// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
#pragma once

#include <string.h>

#include <stdio.h>
#include <iostream>
#include "Date.h"
#include "Emprunteur.h"
#include "Adresse.h"
#include "Conducteur.h"
#include "Location.h"


#include <hash_map>
#include <vector>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// TODO�: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme
void ConvertString ( String ^ s, string& os ); 
std::string ConvertString ( String ^ s);
