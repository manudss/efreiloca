#include "StdAfx.h"
#include "Flotte.h"

Flotte* Flotte::instance = 0;

Flotte::Flotte(void)
{
}

Flotte::~Flotte(void)
{
}

Flotte* Flotte::getinstance()
{
	if (instance == 0)
		instance = new Flotte();
	return instance;
}

Exemplaire* Flotte::recup_exemplaire (std::string rech)
{

it=0;
Exemplaire * retour;
it = tabFlotte.find(rech);
if (it != tabFlotte.end())
		retour = it->second;
	else 
		retour=0;

return retour;

}

void Flotte::ajout(Exemplaire* nouvelExemplaire)
{
	
	tabFlotte.insert(Int_Pair(nouvelExemplaire->get(4),nouvelExemplaire));

}


int Flotte::chargement ()
{
ifstream infile("exemplaires.txt");

if (infile) // test de succès d'ouverture
	{
		int a =0;
		int fin =0;
		Exemplaire *nouv;
		char chaine[500];
		
		string chp;
		while (infile.peek() != EOF) // parcours de exemplaire
		{
		
			
			
			nouv = new Exemplaire;
			while (infile.peek() != '\n' && fin==0) // parcours chp exemplaires
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
/////////////////////////////////////
//Enregistement
int Flotte::enregistrement ()
{

ofstream outfile;

if (outfile.bad()==0)
{
outfile.open("exemplaires.txt",  ios::out | ios::trunc);


for ( hash_iter = tabFlotte.begin( ); hash_iter != tabFlotte.end( ); hash_iter++ )
	{
		for (int i=0; i<16 ; i++)
		{
			outfile << hash_iter->second->get(i);
			outfile << ';';
		}	
	outfile << endl ;
	}

	iter_cour =	 tabFlotte.begin( );

}

else
{
cout << "erreur ouverture";
}

return 1;
}



Exemplaire* Flotte::returnExemplairecour()
{
	return this->iter_cour->second;
}
void Flotte::flottebegin()
{
	iter_cour = tabFlotte.begin( ); 
}
void Flotte::flottesuiv()
{
	iter_cour ++;
	if (iter_cour  == tabFlotte.end( )  )
	{	
		iter_cour =	 tabFlotte.end( );
		iter_cour --;
	}
	//else iter_cour ++;
}
void Flotte::flotteprec()
{
	if (iter_cour == tabFlotte.begin( )	 )
	    iter_cour =	 tabFlotte.begin( );
	else iter_cour --;
}


int Flotte::nbrExemplaire()
{
	return tabFlotte.size();
}