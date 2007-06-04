// stdafx.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets qui sont utilisés fréquemment,
// et sont rarement modifiés
#pragma once

#include <string.h>

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <hash_map>
#include <vector>


class Emprunteur;
class Location;
class Date;
class Adresse;
class conducteur;
class Config;
class Exemplaire;
class flotte;
class GestionVehicule;
class gestionEmprunteurs;
class listeEmprunteur;
class ListeLocation;
class vehicule;




using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// TODO : faites référence ici aux en-têtes supplémentaires nécessaires au programme
void ConvertString ( String ^ s, string& os ); 
std::string ConvertString ( String ^ s);
