#include "stdafx.h"
#include "listeEmprunteur.h"


ListeEmprunteur* ListeEmprunteur::instance = 0;

ListeEmprunteur::ListeEmprunteur(void)
{
}

ListeEmprunteur::~ListeEmprunteur(void)
{
}

void ListeEmprunteur::ajout(Emprunteur* nouveauEmprunteur)
{
	
	TabEmprunteurs.insert(Int_Pair(nouveauEmprunteur->get(4),nouveauEmprunteur));

}

ListeEmprunteur* ListeEmprunteur::getinstance()
{
	if ( instance == 0)
	{
		instance = new ListeEmprunteur();
	}
	return instance;
}

Emprunteur* ListeEmprunteur::returnEmprunteurscour()
{
	
	return this->iter_cour->second;
}
void ListeEmprunteur::emprumteursuiv()
{
	iter_cour ++;
}
void ListeEmprunteur::emprumteurbegin()
{
	iter_cour = TabEmprunteurs.begin( ); 
}

int ListeEmprunteur::nbrEmprunteur()
{
	return TabEmprunteurs.size();
}

int ListeEmprunteur::chargement ()
{

ifstream infile("client.txt");

cout << "chargement !!!\a\a\a" ;
	

if (infile) // test de succès d'ouverture
	{
		int a =0;
		int fin =0;
		Emprunteur *nouv;
		char chaine[500];
		
		string chp;
		while (infile.peek() != EOF)
		{
		
			
			
			nouv = new Emprunteur;
			while (infile.peek() != '\n' && fin==0)
			{
				
				fin=0;
				infile.getline(chaine, 500, ';');
				
				chp = chaine;
				cout << chp;

				nouv->set ( a, chp);
				/*
				if (a==16 && infile.peek()=='0')
				{
				fin =1;
				}
				*/
				if(infile.peek() != '\n')a++;
			}
			if (infile.peek() == '\n')
			{
				infile.get();
				a=0;
				ajout (nouv);
			
			}
			
		}
	}
else
	{
	cout << "erreur d'ouverture";
	}

return 1;
}
int ListeEmprunteur::enregistrement ()
{

ofstream outfile;

if (outfile.bad()==0)
{
outfile.open("client.txt",  ios::out | ios::trunc);


for ( hash_iter = TabEmprunteurs.begin( ); hash_iter != TabEmprunteurs.end( ); hash_iter++ )
	{
		for (int i=0; i<50 ; i++)
		{
			outfile << hash_iter->second->get(i);
			outfile << ';';
		}	
	outfile << endl ;
	}



}

else
{
cout << "erreur ouverture";
}

return 1;
}
